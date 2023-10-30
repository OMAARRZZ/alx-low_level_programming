#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
int file_descriptor_from, file_descriptor_to, bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}
file_descriptor_from = open(argv[1], O_RDONLY);
if (file_descriptor_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
file_descriptor_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_descriptor_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
return (99);
}
while ((bytes_read = read(file_descriptor_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(file_descriptor_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(file_descriptor_from);
close(file_descriptor_to);
return (99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(file_descriptor_from);
close(file_descriptor_to);
return (98);
}
if (close(file_descriptor_from) == -1 || close(file_descriptor_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", (file_descriptor_from == -1) ? file_descriptor_to : file_descriptor_from);
return (100);
}
return (0);
}
