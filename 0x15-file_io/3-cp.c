#include "main.h"

/**
 * main - append text file
 * @argc: arg count
 * @argv: arg value
 * Return: int
 */
int main(int argc, char *argv[])
{
int fileFrom, fileTo, rd, wr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fileFrom = open(argv[1], O_RDONLY);
if (fileFrom == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fileTo == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
for (rd = read(fileFrom, buf, 1024); rd > 0; rd = read(fileFrom, buf, 1024))
{
wr = write(fileTo, buf, rd);
if (wr == -1)
{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); }
}
if (rd == -1)
{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
if (close(fileFrom) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
exit(100);
}
if (close(fileTo) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
exit(100);
}
return (0);
}
