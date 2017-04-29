#!/bin/bash
make
gcc -Wall -Wextra srcs/main_test.c -o malloc_test
export DYLD_LIBRARY_PATH=.
export DYLD_INSERT_LIBRARIES=ft_malloc.so
export DYLD_FORCE_FLAT_NAMESPACE=1

./malloc_test
