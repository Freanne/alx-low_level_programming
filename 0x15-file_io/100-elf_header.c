#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**

error_exit - Prints an error message to stderr and exits with status code 98
@msg: the error message to print
*/
void error_exit(char *msg)
{
dprintf(STDERR_FILENO, "%s", msg);
exit(98);
}
/**

print_elf_header - Prints information about the ELF header
@header: a pointer to the ELF header structure
*/
void print_elf_header(Elf64_Ehdr *header)
{
int i;

printf("ELF Header:\n");
printf(" Magic: ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf(" Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "none");
printf(" Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "none");
printf(" Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf(" OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "none");
printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf(" Type: %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "none");
printf(" Entry point address: %#lx\n", header->e_entry);
}
/**

main - Entry point

@argc: the number of arguments passed to the program

@argv: an array of pointers to the arguments

Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Can't open file\n");

if (read(fd, &header, sizeof(header)) != sizeof(header))
error_exit("Error: Can't read from file\n");

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3)
error_exit("Error: Not an ELF file\n");

print_elf_header(&header);

if (close(fd) == -1)
error_exit("Error: Can't close file descriptor\n");

return (0);
}
