#!/bin/bash

IP_ADDRESS=$1
PORT=$2

nc -zw10 ${IP_ADDRESS} ${PORT}

if [ "$?" -eq 0 ]
then
    echo "Port is open"
else
    echo "Port is closed"
fi

exit
