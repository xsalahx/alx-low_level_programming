#!/bin/bash
gcc -c $PWD/*.c
ar rc liball.a $PWD/*.o
