/*
 * File: 100-elf_header.c
 * Auth: Ifedayo P Oni <ifedayoprince@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>
#include "main.h"

/**
 * print_error - writes the error to standard output.
 * @msg: the error message
 *
 * Return: void
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_elf_header_info - writes the details of the elf header.
 * @header: the elf structure.
 *
 * Return: void
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	int i = 0;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
		   header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
		   header->e_ident[EI_DATA] == ELFDATA2LSB ?
		   "2's complement, little endian" : "Unknown data format");
	printf("  Version:                           %d (current)\n",
		   header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - %s\n",
			header->e_ident[EI_OSABI] == ELFOSABI_SYSV
			? "System V" : header->e_ident[EI_OSABI] == ELFOSABI_HPUX	 ? "HP-UX"
																 : header->e_ident[EI_OSABI] == ELFOSABI_NETBSD	 ? "NetBSD"
																 : header->e_ident[EI_OSABI] == ELFOSABI_LINUX	 ? "Linux"
																 : header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "Solaris"
																 : header->e_ident[EI_OSABI] == ELFOSABI_AIX	 ? "AIX"
																 : header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD ? "FreeBSD"
																 : header->e_ident[EI_OSABI] == ELFOSABI_OPENBSD ? "OpenBSD"
																												 : "");

	printf("  ABI Version:                       %d\n",
		   header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
		   header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown type");
	printf("  Entry point address:               0x%lx\n",
		   (unsigned int) header->e_entry);
}

/**
 * main - entry point for the program.
 *
 * @argc: the number of arguments passed.
 * @argv: an array of arguments passed.
 *
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error reading ELF header");

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("Not an ELF file");

	print_elf_header_info(&header);

	close(fd);
	return (0);
}
