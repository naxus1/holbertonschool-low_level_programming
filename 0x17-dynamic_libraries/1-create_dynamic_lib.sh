#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra -c *.c && gcc -shared -o 100-operations.so *.o
