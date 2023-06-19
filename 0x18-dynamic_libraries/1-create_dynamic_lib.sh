#!/bin/bash
gcc -c -fPIC $PWD/*.c
gcc -shared -o liball.so $PWD/*.o
