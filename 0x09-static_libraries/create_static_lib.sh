#!/bin/bash
gcc -fno-PIC -c *.c
ar rcs liball.a *.o
