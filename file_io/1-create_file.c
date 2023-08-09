#include "main.h"
/**
 *create_file - a function that creates a file
 *@filename: points to the name of a file
 *@text_content: points to the text to copy in the file
 *Return: 1 on success or -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	/*Declarations*/
	int fd, text_size;
	char *buf;

	/*gET SIZE OF TEXT_CONTENT*/
	text_size = sizeof(text_content);
	/*allocate ner space*/
	buf = malloc(sizeof(char) * text_size);
	/*check if malloc failed and the file name*/
	if (buf == NULL || filename == NULL)
		return (-1);
	/*open new file*/
	fd = open(filename, O_CREAT, 0600);
	/*Verify if text_content NULL*/
	if (!text_content)
	{
		close(fd);
		return (0);
	} /*end if*/
	/*write to the file*/
	write(STDOUT_FILENO, buf, sizeof(text_content));
	return (1);
} /*end function*/
