#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * check_elf_file - checks if the file is an ELF file
 * @header: pointer to the ELF header
 *
 * Return: 1 if ELF file, 0 otherwise
 */
int check_elf_file(Elf64_Ehdr *header)
{
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3)
        return (0);
    return (1);
}

/**
 * print_header_info - prints the ELF header information
 * @header: pointer to the ELF header
 */
void print_header_info(Elf64_Ehdr *header)
{
int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", header->e_ident[i], i + 1 == EI_NIDENT ? '\n' : ' ');
    printf("  Class:                             %s\n",
           header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
           header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
           header->e_ident[EI_CLASS] == ELFCLASSNONE ? "none" : "unknown");
    printf("  Data:                              %s\n",
           header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
           header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" :
           header->e_ident[EI_DATA] == ELFDATANONE ? "none" : "unknown");
    printf("  Version:                           %d %s\n",
           header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
    }
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type)
    {
        case ET_NONE: printf("NONE (None)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
    case ET_EXEC: printf("EXEC (Executable file)\n"); break;
    case ET_DYN: printf("DYN (Shared object file)\n"); break;
    case ET_CORE: printf("CORE (Core file)\n"); break;
    default: printf("<unknown: %x>\n", header->e_type);
}
printf("  Entry point address:               %#lx\n", header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Cannot read from file '%s'\n", argv[1]);
return (98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", argv[1]);
close(fd);
return (98);
}

if (!check_elf_file(&header))
{
fprintf(stderr, "Error: '%s' is not an ELF file\n", argv[1]);
close(fd);
return (98);
}

print_header_info(&header);

close(fd);
return (0);
}
