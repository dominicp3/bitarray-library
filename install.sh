#!/bin/bash
gcc -c -fpic bitarray.c && \
gcc -shared -o libbitarray.so bitarray.o && \
sudo cp ./libbitarray.so /usr/lib && \
sudo cp ./bitarray.h /usr/include && \
rm *.so *.o
