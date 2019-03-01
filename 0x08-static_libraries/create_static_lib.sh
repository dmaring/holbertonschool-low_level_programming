#!/bin/bash

ls *.c | xargs -n 1 gcc -g -O -c && \
    ls *.o | xargs ar rc liball.a
