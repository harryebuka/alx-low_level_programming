#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define USAGE "Usage: %s elf_filename\n"

/**
 * print_elf_header - prints the ELF header information
 * @ehdr: pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *ehdr)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", ehdr->e_ident[i]);
    printf("\n");
    printf("  Class:                             ");
    if (ehdr->e_ident[EI_CLASS] == ELFCLASSNONE)
        printf("none\n");
    else if (ehdr->e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else if (ehdr->e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    printf("  Data:                              ");
    if (ehdr->e_ident[EI_DATA] == ELFDATANONE)
        printf("none\n");
    else if (ehdr->e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (ehdr->e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    printf("  Version:                           %d\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
        case ELFOSABI_OPENBSD: printf("UNIX - OpenBSD\n"); break;
        case ELFOSABI_OPENVMS: printf("VMS - OpenVMS\n"); break;
        case ELFOSABI_NSK: printf("HP - Non-Stop Kernel\n"); break;
        default: printf("<unknown: %x>\n", ehdr->e_ident[EI_OSABI]); break;
    }
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (ehdr->e_type)
    {
        case ET_NONE: printf("NONE (Unknown type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
	case ET_DYN: printf("DYN (Shared object file or dynamic library)\n"); break;
	case ET_CORE: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %x>\n", ehdr->e_type); break;
}
printf(" Entry point address: %lx\n", (unsigned long)ehdr->e_entry);
printf("\n");
}

/**

main - entry point

@argc: argument count

@argv: argument vector

Return: 0 on success, 98 on failure
*/
int main(int argc, char **argv)
{
int fd;
Elf64_Ehdr ehdr;

if (argc != 2)
{
fprintf(stderr, USAGE, argv[0]);
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
return (98);
}

if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
{
fprintf(stderr, "Error: could not read ELF header from file '%s'\n", argv[1]);
close(fd);
return (98);
}

if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
{
fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
close(fd);
return (98);
}

print_elf_header(&ehdr);

close(fd);
return (0);
}
