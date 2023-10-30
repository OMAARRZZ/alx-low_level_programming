#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
int file_descriptor;
ssize_t total_bytes = 0;
char buffer[1024];
ssize_t bytes_read;
ssize_t bytes_written;
if (filename == NULL)
{
return (0);
}
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
return (0);
}
while (letters > 0) 
{
ssize_t read_size = (letters < sizeof(buffer)) ? letters : sizeof(buffer);
bytes_read = read(file_descriptor, buffer, read_size);
if (bytes_read == -1) 
{
close(file_descriptor);
return (0);
}
if (bytes_read == 0)
break;
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1)
{
close(file_descriptor);
return (0);
}
total_bytes += bytes_written;
letters -= bytes_read;
}
close(file_descriptor);
return (total_bytes);
}
