#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -O liball.so
