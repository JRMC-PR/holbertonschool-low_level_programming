#include "main.h"
/**
 *cp - copy the ontents of one file to the next
 *@file_from: where to copy from
 *@file_to: where to copy to
 */
void cp(char *file_from, char *file_to)
{
	/*Declarations*/
	int fd1, fd2, n;
	char *buf = malloc(1024);
	/*check for correct argument count*/
	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	} /*end check if*/
	/*check if file existis || if file is readable */
	if (access(file_from, F_OK) == -1 || access(file_from, R_OK) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	} /*end second check if*/
	fd1 = open(file_from, O_RDONLY); /*open soruce file*/
	n = read(fd1, buf, 1024); /*read from file*/
	/*create file_to*/
	if (access(file_to, F_OK) == 0)
		fd2 = open(file_to, O_TRUNC | O_WRONLY);
	else
		fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY , 0664);
	/*now write to the new file*/
	if (write(fd2, buf, n) != n)
	{
		dprintf(STDOUT_FILENO, "Error: Writing to file %s failed\n", file_to);
		exit(99);
	} /*write and check if success*/
	close(fd1);
	if(close(fd2) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %i\n", fd2);
		exit(100);
	} /*end close if*/
} /*end function*//**
 *main - text cp function
 *@arg: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int arg, char *argv[])
{
	/*Declaration*/
	char *from;
	char *to;
	/*chekc for corret argument count*/
	if (arg != 3)
	{   dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to = argv[1];
	from = argv[2];
	cp(to, from);
	return 0;
}

