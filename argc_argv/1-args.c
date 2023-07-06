#include <stdio.h>
#include "main.h"
/**
 *main- Execute main function
 *@argc: holds an int
 *@argv: points to a pointer array
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	/*unused agument*/
	(void)*argv;
	printf("%d\n", argc - 1); /*-1 to take account fo rnull byte*/
	return (0);
} /*end fucntion*/
