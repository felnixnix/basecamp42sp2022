#!/bin/sh
ifconfig | grep ether | cut -c 15- | cut -d' ' -f1,3,4,6,7