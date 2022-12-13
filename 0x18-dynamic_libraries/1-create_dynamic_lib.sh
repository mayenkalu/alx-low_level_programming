#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o -O liball.so
