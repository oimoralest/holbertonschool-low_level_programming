#include "holberton.h"
/**
 *str_len - find the length of a string
 *@str: string
 *
 *Return: i length of the string
 */
int str_len(char *str)
{
	unsigned int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 *elf_check - check if the file is a ELF file
 *@header: pointer to the ELF struct
 *
 *Return: 1 on success 0 on failure
 */
int elf_check(Elf64_Ehdr *header)
{
	if (header->e_ident[0] == ELFMAG0 && header->e_ident[1] == ELFMAG1 &&
		header->e_ident[2] == ELFMAG2 && header->e_ident[3] == ELFMAG3)
	{
		return (1);
	}

	return (0);
}
/**
 *print_magic - prints the magic number of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_magic(Elf64_Ehdr *header)
{
	unsigned int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (i < 16)
		printf("%02x ", header->e_ident[i]), i++;
	printf("\n");
}
/**
 *print_class - prints the class of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_class(Elf64_Ehdr *header)
{
	printf("  Class:\t\t\t     ");
	if (header->e_ident[4] == ELFCLASS32)
		printf("ELF32\n");
	else if (header->e_ident[4] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("Invalid class\n");
}
/**
 *print_data - prints the data of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_data(Elf64_Ehdr *header)
{
	printf("  Data:\t\t\t\t     ");
	if (header->e_ident[5] == ELFDATANONE)
		printf("Invalid data encoding\n");
	else if (header->e_ident[5] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("2's complement, big endian\n");
}
/**
 *print_version - prints the version of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_version(Elf64_Ehdr *header)
{
	printf("  Version:\t\t\t     ");
	if (header->e_ident[6] == EV_NONE)
		printf("Invalid ELF version\n");
	else if (header->e_ident[6] == EV_CURRENT)
		printf("1 (current)\n");
	else
		printf("<unknown: %i>\n", header->e_ident[EI_VERSION]);
}
/**
 *print_OS - prints the OS/ABI of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_OS(Elf64_Ehdr *header)
{
	printf("  OS/ABI:\t\t\t     ");
	if (header->e_ident[7] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (header->e_ident[7] == ELFOSABI_SYSV)
		printf("Alias\n");
	else if (header->e_ident[7] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (header->e_ident[7] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (header->e_ident[7] == ELFOSABI_GNU)
		printf("UNIX - GNU\n");
	else if (header->e_ident[7] == ELFOSABI_LINUX)
		printf("UNIX - GNU\n");
	else if (header->e_ident[7] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (header->e_ident[7] == ELFOSABI_AIX)
		printf("IBM AIX\n");
	else if (header->e_ident[7] == ELFOSABI_IRIX)
		printf("UNIX - Irix\n");
	else if (header->e_ident[7] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (header->e_ident[7] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (header->e_ident[7] == ELFOSABI_MODESTO)
		printf("Novell - Modesto\n");
	else if (header->e_ident[7] == ELFOSABI_OPENBSD)
		printf("UNIX - OpenBSD\n");
	else if (header->e_ident[7] == ELFOSABI_ARM_AEABI)
		printf("ARM EABI\n");
	else if (header->e_ident[7] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (header->e_ident[7] == ELFOSABI_STANDALONE)
		printf("Standalone application\n");
	else
		printf("<unknown %x", header->e_ident[EI_OSABI]);
}
/**
 *print_ABI - prints the ABI version of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_ABI(Elf64_Ehdr *header)
{
	printf("  ABI Version:\t\t\t     ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
}
/**
 *print_type - prints the type of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_type(Elf64_Ehdr *header)
{
	printf("  Type:\t\t\t\t     ");
	if (header->e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (header->e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (header->e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (header->e_type == ET_DYN)
		printf("DYN (Shared Object file)\n");
	else if (header->e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>", header->e_type);
}
/**
 *print_Entry - prints the entry point address of the ELF file
 *@header: pointer to the ELF struct
 *
 *Return: void
 */
void print_Entry(Elf64_Ehdr *header)
{
	printf("  Entry point address:\t\t     ");
	printf("0x%x\n", (unsigned int) header->e_entry);
}
/**
 *_error - prints an error message to the standard error
 *@n: error's number
 *@message: message to be printed
 *
 *Return: void
 */
void _error(int n, char *message)
{
	write(STDERR_FILENO, message, str_len(message));
	exit(n);
}
/**
 *main - program that displays the information contained in the ELF header at
 *the start of an ELF file
 *@argc: number of arguments supplied to the program
 *@argv: array of pointer to the arguments supplied
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_elf = 0, aux_read = 0, check = 0;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		_error(96, "Error: Usage: ./elf_header elf_filename\n");
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
		_error(97, "Cannot be allocated memory\n");
	fd_elf = open(argv[1], O_RDONLY);
	if (fd_elf == -1)
		_error(99, "The file cannot be opened or readed\n");
	aux_read = read(fd_elf, header, sizeof(Elf64_Ehdr));
	if (aux_read == -1)
		_error(99, "The file cannot be opened or readed\n");
	check = elf_check(header);
	if (!check)
		_error(98, "Error: Not an ELF file - it has the wrong magic bytes at the start\n");
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_OS(header);
	print_ABI(header);
	print_type(header);
	print_Entry(header);
	if (close(fd_elf) == -1)
		_error(100, "The file cannot be closed\n");
	free(header);

	return (0);
}
