#!/bin/bash
gcc -fPIC -shared -Wall -Werror -Wextra -pedantic -o "libdynamic.so" *.c
