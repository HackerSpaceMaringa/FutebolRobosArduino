#! /usr/bin/python

import os

import serial as s
import time

ADDR = 0
NAME = 1
PORT = 2

devFile = '.dev'
devSerial = {}
devices = []

with open(devFile, 'r+') as fd:
   lines = fd.readlines()
   for i in range(len(lines)):
       lines[i] = lines[i].replace('\n', '')
       devLine = lines[i].split(' ')
       devices.append(devLine)

for dev in devices:
    newSerial = s.Serial("/dev/rfcomm%s" % dev[PORT])
    devSerial[dev[ADDR]] = newSerial

while True:
    com = raw_input("Command [test|exit]:")

    if (com == 'exit'):
        break
    elif not (com == 'test'):
        continue

    robot = raw_input("Robot (0-%d):" % (len(devices)-1))
    msg = raw_input("Message:")
    
    curDev = devices[int(robot)]

    if (devSerial[curDev[ADDR]].isOpen):
        print "Sending to serial port /dev/rfcomm%s." % curDev[PORT]
        devSerial[curDev[ADDR]].write(msg)
        print "AT sent to robot %s in address %s." % (curDev[NAME], curDev[ADDR])
    else:
        print "Serial /dev/rfcomm%s not ok..." % curDev[PORT]

#    data = devSerial[curDev[ADDR]].read(16)
#    print "Received: %s" % data

