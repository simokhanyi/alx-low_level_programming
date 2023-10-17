#!/bin/bash
gcc -Wall -Wextra -Werror -pendatic -c -fPIC *.c
dcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
