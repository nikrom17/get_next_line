# get_next_line

This project is a reimplementation of the standard C function `fgets` with some additional functionality added in. This C function `get_next_line` will allow you to read and return a line from multiple file descriptors. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

Tested on macOS High Sierra with gcc version 9.1.0

### Installing

1. `git clone https://github.com/nikrom17/get_next_line.git`
2. `cd get_next_line`
3. run `make -C libft/` to compile the library and produce a `libft.a` file
4. to make use of the library run `gcc -L. -lftprintf your_c_file.c` while in the `ft_printf/` directory
	* you can move the `libft.a` file into your project repo **but** you must also copy over the `libft.h` header file
	* if you decide to move the library, run `gcc -L<path_to_library> -lftprintf your_c_file.c`
5. Makefile commands:
	* `re`, `clean`, `fclean`, and `all`
6. Compile the `get_next_line` function with the libft.a file
    `clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c`
7. Use the `get_next_line.o` file when compiling with your "main" file. See below for an example.
    `clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c`
    `clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft`

## Authors

**Nik Roman**
