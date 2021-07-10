#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cr libholberton.a *.o

