#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c ./force/*.c
ar -cr libholberton.a *.o

