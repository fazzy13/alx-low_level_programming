# 0x14. C - Bit Manipulation

This project focuses on the concept of bit manipulation in the C programming language. It provides a series of tasks that involve working with individual bits and utilizing bitwise operators. The objective of this project is to deepen your understanding of manipulating bits and effectively utilizing bitwise operations.

## Learning Objectives

By the end of this project, you should be able to:

- Independently seek and identify relevant sources of information without relying heavily on external assistance.
- Understand and proficiently apply techniques to manipulate bits and employ bitwise operators.
- Enhance your problem-solving skills and logical thinking through working with binary representations of numbers.

## Requirements
- Allowed editors: `vi, vim, emacs`.
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, with the following compiler options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Ensure that all your files end with a new line.
- A `README.md` file at the root of the project directory is mandatory.
- Your code must adhere to the `Betty` coding style. You can check your code's compliance using the `betty-style.pl` and `betty-doc.pl` scripts.
- The use of global variables is strictly prohibited.
- Each function should consist of a maximum of five functions.
- You are only allowed to use the following `C` standard library functions: `malloc`, `free`, and `exit`. Avoid using any other functions such as `printf`, `puts`, `calloc`, `realloc`, etc.
- You are permitted to use the `_putchar` function.
- You are not required to push the `_putchar.c` file. The checker will use its own version.

## Files and Directories
The project contains the following tasks:

- `0-binary_to_uint.c`: This file contains a function that converts a binary number represented as a string to an unsigned integer.
- `1-print_binary.c`: This file contains a function that prints the binary representation of a given unsigned long integer.
- `2-get_bit.c`: This file contains a function that returns the value of a bit at a specified index.
- `3-set_bit.c`: This file contains a function that sets the value of a bit at a given index to 1.
- `4-clear_bit.c`: This file contains a function that sets the value of a bit at a specified index to 0.
- `5-flip_bits.c`: This file contains a function that determines the number of bits that need to be flipped to convert one number to another.
- `100-get_endianness.c`: This file contains a function that checks the endianness of the system it is executed on.
- `101-password`: This file contains the password required to successfully execute the crackme3 program.

## Usage

To compile the C files, use the following command format:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file.c> -o <output_file>
```

Replace `<file.c>` with the name of the `C` file you want to compile and `<output_file>` with the desired name for the compiled output file.

To run the compiled program, use the following command:

`./<output_file>`

Replace `<output_file>` with the name of the compiled output file.

## Quiz

A quiz is included in this project to evaluate your understanding of the covered topics. The quiz questions can be found within the project files.

## Author
This project was developed by Julien Barbier as part of the ALX Low-Level Programming curriculum.
