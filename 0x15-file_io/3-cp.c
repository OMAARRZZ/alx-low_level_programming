#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_error - Print an error message and exit with a specific code.
 * @message: The error message format.
 * @file: The filename to include in the message.
 * @code: The exit code.
 */
void print_error(const char *message, const char *file, int code)
{
dprintf(STDERR_FILENO, message, file);
exit(code);
}
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
print_error("Usage: %s file_from file_to\n", argv[0], 97);
}
int fd_from = open(argv[1], O_RDONLY);
int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_from == -1 || fd_to == -1)
{
if (fd_from == -1)
print_error("Error: Can't read from file %s\n", argv[1], 98);
else
print_error("Error: Can't write to %s\n", argv[2], 99);
}
char buffer[1024];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
print_error("Error: Can't write to %s\n", argv[2], 99);
}
if (bytes_read == -1)
{
print_error("Error: Can't read from file %s\n", argv[1], 98);
}
if (close(fd_from) == -1 || close(fd_to) == -1)
{
print_error("Error: Can't close fd %d\n",
(fd_from == -1) ? fd_to : fd_from, 100);
}
return (0);
}
