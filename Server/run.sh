#! /bin/bash

if [ $# -lt 1 ]; then
  echo "You must specify ONE parameter."
  exit
fi

tmp=".tmp"
scan=".scan"
dev=".dev"

scan() {

  hcitool scan > $scan

  nDev=`cat $scan | wc -l`
  nDev=$(($nDev - 1))

  tail -n $nDev $scan > $tmp
  > $dev

  cat $tmp | {

  n=0
  while read line; do
    device=`echo $line | sed -e 's/\s[\s]*/ /g' | sed -e 's/^[[:space:]]*//g'`  
    addr=`echo $device | cut -d' ' -f 1`
    name=`echo $device | cut -d' ' -f 2`

    echo -n "Connect $name at address $addr[y/N]: "
    read ans < /dev/tty

    if [ "$ans" == "y" ] || [ "$ans" == "Y" ]; then
      rfcomm bind /dev/rfcomm${n} $addr 1
      chgrp adm /dev/rfcomm${n}

      echo "$addr $name $n" >> $dev

      n=$(($n + 1))
    fi
  done

}

rm $tmp
rm $scan

}

# Call python

release() {
  file=`ls -a| grep -e "^\.dev$"`
  if [ "$file" == "" ]; then
    echo "You have to scan first!"
    exit
  fi

  cat $dev | {

  while read line; do
    addr=`echo $line | cut -d' ' -f 1`
    name=`echo $line | cut -d' ' -f 2`
    n=`echo $line | cut -d' ' -f 3`

    echo "Releasing $name at address $addr..."
    rfcomm release /dev/rfcomm$n
  done

}

rm $dev
}


# Main prog
if [ "${1}" == "scan" ]; then
  scan
else
  if [ "${1}" == "release" ]; then
    release
  fi
fi
