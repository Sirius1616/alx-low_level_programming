#!/bin/bash
gcc -c -fPIC *.c
nm -D liball.so
