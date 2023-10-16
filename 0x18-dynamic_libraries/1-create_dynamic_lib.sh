#!/bin/bash
gcc -wall -wextra -werror -pendatic -c -fPIC *.c
dcc -shared -0 liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
