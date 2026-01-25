#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
#define P (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, various error codes on failure
 */
int main(int argc, char *argv[])
{
	int f1, f2; ssize_t r, w; char b[BUFFER_SIZE];
	if (argc != 3) dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1) dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, P);
	if (f2 == -1) dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), close(f1), exit(99);
	while ((r = read(f1, b, BUFFER_SIZE)) > 0)
	{
		w = write(f2, b, r);
		if (w != r) dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), close(f1), close(f2), exit(99);
	}
	if (r == -1) dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), close(f1), close(f2), exit(98);
	if (close(f1) == -1) dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (close(f2) == -1) dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
