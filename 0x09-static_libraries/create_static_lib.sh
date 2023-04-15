#!bin/bash
gcc -Wall -pedanic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
