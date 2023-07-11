#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <elf.h>

#define BUF_SIZE 1024

/**
 * print_elf_header_info - prints the ELF header info
 * @elf_header: pointer to the ELF header struct
 * Return: void
*/
void print_elf_header_info(Elf64_Ehdr *elf_header) {
	int i;
	printf("Magic: ");
	for(i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("Class: ");
	switch(elf_header->e_ident[EI_CLASS]) {
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		default:
			printf("Invalid class");
			break;
	}
	printf("\n");

	printf("Data: ");
	switch(elf_header->e_ident[EI_DATA]) {
		case ELFDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		default:
			printf("Invalid data encoding");
			break;
	}
	printf("\n");
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: ");
	switch(elf_header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:
			printf("UNIX System V ABI");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI");
			break;
		case ELFOSABI_AIX:
			printf("AIX ABI");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI");
			break;
		case ELFOSABI_TRU64:
			printf("Tru64 UNIX ABI");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone (embedded) ABI");
			break;
		default:
			printf("Unknown OS/ABI");
			break;
	}
	printf("\n");
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: ");
	switch (elf_header->e_type) {
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("Unknown type");
			break;
	}
	printf("\n");

	printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}
/**
 * main - displays the information contained in the ELF header at the start of an ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 *
*/
int main(int argc, char **argv) {
	int fd;
	ssize_t read_size;
	Elf64_Ehdr elf_header;
	if (argc != 2) {
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		fprintf(stderr, "Error: Cannot read file '%s'\n", argv[1]);
		exit(98);
	}
	read_size = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (read_size == -1) {
		fprintf(stderr, "Error: Cannot read ELF header from file '%s'\n", argv[1]);
		exit(98);
	} else if (read_size != sizeof(Elf64_Ehdr)) {
		fprintf(stderr, "Error: Incomplete ELF header in file '%s'\n", argv[1]);
		exit(98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Error: File '%s' is not an ELF file\n", argv[1]);
		exit(98);
	}
	print_elf_header_info(&elf_header);
	close(fd);
	return 0;
}