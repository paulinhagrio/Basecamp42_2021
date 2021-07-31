#!/bin/sh
ifconfig -a | grep 'ether'| tr -d 'ether' | awk '{print $1}'