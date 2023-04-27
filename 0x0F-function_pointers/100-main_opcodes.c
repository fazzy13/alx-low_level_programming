#include <stdio.h>                                                                                                                                                                  
#include <stdlib.h>

/**

  * print_main_opcodes - Prints the opcodes of the main function
  * @num_bytes: Number of bytes to print
  */
void print_main_opcodes(int num_bytes)
{

  char *main_ptr;

 11     int i;

 12 

 13     if (num_bytes < 0)

 14     {

 15         printf("Error: Number of bytes cannot be negative\n");

 16         exit(2);

 17     }

 18 

 19     main_ptr = (char *)&print_main_opcodes;

 20 

 21     printf("Main function opcodes:\n");

 22 

 23     for (i = 0; i < num_bytes; i++)

 24     {

 25         printf("%02x ", main_ptr[i] & 0xff);

 26     }

 27 

 28     printf("\n");

 29 }

 30 

 31 /**

 32  * main - Entry point of the program

 33  * @argc: Number of command-line arguments

 34  * @argv: Array of command-line arguments

 35  * Return: 0 on success, 1 or 2 on error

 36  */

 37 int main(int argc, char *argv[])

 38 {

 39     int num_bytes;

 40 

 41     if (argc != 2)

 42     {

 43         printf("Error: Incorrect number of arguments\n");

 44         exit(1);

 45     }
   #include <stdio.h>                                                                                                                                                                  

  2 #include <stdlib.h>

  3 

  4 /**

  5  * print_main_opcodes - Prints the opcodes of the main function

  6  * @num_bytes: Number of bytes to print

  7  */

  8 void print_main_opcodes(int num_bytes)

  9 {

 10     char *main_ptr;

 11     int i;

 12 

 13     if (num_bytes < 0)

 14     {

 15         printf("Error: Number of bytes cannot be negative\n");

 16         exit(2);

 17     }

 18 

 19     main_ptr = (char *)&print_main_opcodes;

 20 

 21     printf("Main function opcodes:\n");

 22 

 23     for (i = 0; i < num_bytes; i++)

 24     {

 25         printf("%02x ", main_ptr[i] & 0xff);

 26     }

 27 

 28     printf("\n");

 29 }

 30 

 31 /**

 32  * main - Entry point of the program

 33  * @argc: Number of command-line arguments

 34  * @argv: Array of command-line arguments

 35  * Return: 0 on success, 1 or 2 on error

 36  */

 37 int main(int argc, char *argv[])

 38 {

 39     int num_bytes;

 40 

 41     if (argc != 2)

 42     {

 43         printf("Error: Incorrect number of arguments\n");

 44         exit(1);

 45     }

 46 

 47     num_bytes = atoi(argv[1]);

 48     print_main_opcodes(num_bytes);

 49 

 50     return (0);

 51 }  

