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

	/*gET SIZE OF TEXT_CONTENT*/
	text_size = strlen(text_content);
	/*allocate ner space*/
	/*check if malloc failed and the file name*/
	if (filename == NULL)
		return (-1);
	/*open new file*/
	fd = open(filename, O_CREAT, 0600);
	/*Verify if text_content NULL*/
	if (!text_content)
	{
		close(fd);
		return (1);
	} /*end if*/
	/*write to the file*/
	write(fd, text_content, text_size);
	return (1);
} /*end function*/
