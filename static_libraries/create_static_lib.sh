#!/bin/bash
gcc -c -Wall -Werror -Wextra -c *.c
ar -rcs libmy.a *.o
ar -rcs liball.a *.o
