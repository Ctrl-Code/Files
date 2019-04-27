# ctrl-code 2019-apr-27 0113 pm ist

# shell script to demonstrate the working of if-else statements with arguments

#!/bin/bash

if [ $2 ]; then
    echo "argument 1 entered => $1";
    echo "argument 2 entered => $2";
elif [ $1 ]; then
    echo "argument 1 entered => $1";
else
    echo "no arguments entered";
fi