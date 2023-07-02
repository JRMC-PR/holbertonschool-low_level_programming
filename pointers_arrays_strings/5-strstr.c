#include <stdio.h>
#include "main.h"
/**
 **_strstr- execute function
 *@haytack: points to a char
 *@needle: points to a char
 *Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	do {
		if (*haystack == *needle)
		{
			count++;
			return (haystack);
		}
		haystack++;
	} while(*needle != '\0' && *haystack != '\0');
	if (count == 0)
		return (0);
return (0);
} /*end function*/

