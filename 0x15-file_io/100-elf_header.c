#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
* address - prints address
* @ptr: magic.
* Return: no return.
*/
void address(char *ptr)
{
int i, begin;
char s;

printf("  Entry point address:0x");

s = ptr[4] + '0';
if (s == '1')
{
begin = 26;
printf("80");
for (i = begin; i >= 22; i--)
{
if (ptr[i] > 0)
printf("%x", ptr[i]);
else if (ptr[i] < 0)
printf("%x", 256 + ptr[i]);
}
if (ptr[7] == 6)
printf("00");
}

if (s == '2')
{
begin = 26;
for (i = begin; i > 23; i--)
{
if (ptr[i] >= 0)
printf("%02x", ptr[i]);

else if (ptr[i] < 0)
printf("%02x", 256 + ptr[i]);

}
}
printf("\n");
}
/**
* type - prints type
* @ptr: magic.
* Return: no return.
*/
void type(char *ptr)
{
char type = ptr[16];

if (ptr[5] == 1)
type = ptr[16];
else
type = ptr[17];

printf("  Type:");
if (type == 0)
printf("NONE (No file type)\n");
else if (type == 1)
printf("REL (Relocatable file)\n");
else if (type == 2)
printf("EXEC (Executable file)\n");
else if (type == 3)
printf("DYN (Shared object file)\n");
else if (type == 4)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", type);
}
/**
* osabi - prints osabi
* @ptr: magic.
* Return: no return.
*/
void osabi(char *ptr)
{
char osabi = ptr[7];

printf("  OS/ABI:");
if (osabi == 0)
printf("UNIX - System V\n");
else if (osabi == 2)
printf("UNIX - NetBSD\n");
else if (osabi == 6)
printf("UNIX - Solaris\n");
else
printf("<unknown: %x>\n", osabi);

printf("  ABI Version:%d\n", ptr[8]);
}
/**
* version - prints version
* @ptr: magic.
* Return: no return.
*/
void version(char *ptr)
{
int version = ptr[6];

printf("  Version:%d", version);

if (version == EV_CURRENT)
printf(" (current)");

printf("\n");
}
/**
* data - prints data
* @ptr: magic.
* Return: no return.
*/
void data(char *ptr)
{
char data = ptr[5];

printf(" Data:2's complement");
if (data == 1)
printf(", little endian\n");

if (data == 2)
printf(", big endian\n");
}
/**
* magic - prints magic info.
* @ptr: magic.
* Return: no return.
*/
void magic(char *ptr)
{
int b;

printf("  Magic:  ");

for (b = 0; b < 16; b++)
printf(" %02x", ptr[b]);

printf("\n");

}
/**
* sys - check the version system.
* @ptr: magic.
* Return: no return.
*/
void sys(char *ptr)
{
char sys = ptr[4] + '0';

if (sys == '0')
exit(98);

printf("ELF Header:\n");
magic(ptr);

if (sys == '1')
printf("  Class:ELF32\n");

if (sys == '2')
printf("  Class:ELF64\n");

address(ptr);
data(ptr);
version(ptr);
osabi(ptr);
type(ptr);
}
/**
* elf - check if it is an elf file.
* @ptr: magic.
* Return: 1 if it is an elf file. 0 if not.
*/
int elf(char *ptr)
{
int address = (int)ptr[0];
char E = ptr[1];
char L = ptr[2];
char F = ptr[3];

if (address == 127 && E == 'E' && L == 'L' && F == 'F')
return (1);

return (0);
}
/**
* main - check the code for Holberton School students.
* @argc: arguments.
* @argv: arguments vector.
* Return: 0
*/
int main(int argc, char *argv[])
{
int fd, ret_read;
char ptr[27];

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
exit(98);
}

fd = open(argv[1], O_RDONLY);

if (fd < 0)
{
dprintf(STDERR_FILENO, "Err: file can not be open\n");
exit(98);
}

lseek(fd, 0, SEEK_SET);
ret_read = read(fd, ptr, 27);

if (ret_read == -1)
{
dprintf(STDERR_FILENO, "Err: The file can not be read\n");
exit(98);
}

if (!elf(ptr))
{
dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
exit(98);
}

sys(ptr);
close(fd);

return (0);
}
