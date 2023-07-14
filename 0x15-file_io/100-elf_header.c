#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program with the specified code.
 * @code: The exit code.
 * @message: The error message to print.
 */
void error_exit(int code, const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(code);
}

/**
 * read_elf_header - Reads and displays the ELF header information.
 * @fd: The file descriptor of the ELF file.
 */
void read_elf_header(int fd)
{
	int i = 0;
	/*int class = elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32;*/
	/*char data = elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian";*/

    Elf64_Ehdr elf_header;

    /* Read ELF header */
    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
        error_exit(98, "Failed to read ELF header");

    /* Display ELF header information */
    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", elf_header.e_ident[i]);
    printf("\n");
    printf("Class: %d-bit\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);
    printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "little endian" : "big endian");
    printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", elf_header.e_type);
    printf("Entry point address: 0x%lx\n", elf_header.e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success, 1 on incorrect number of arguments or file access error.
 */
int main(int argc, char *argv[])
{
	int fd;
	char *elf_filename;

    /* Step 1: Parse Command-line Arguments */
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (1);
    }

    elf_filename = argv[1];

    /* Step 2: Open the ELF file */
    fd = open(elf_filename, O_RDONLY);

    if (fd == -1)
        error_exit(1, "Failed to open the ELF file");

    /* Step 3: Read and display the ELF header */
    read_elf_header(fd);

    /* Step 4: Close the file descriptor */
    close(fd);

    return (0);
}
