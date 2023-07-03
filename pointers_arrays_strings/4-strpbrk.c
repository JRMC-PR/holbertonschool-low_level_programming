#include <stdio.h>
#include "main.h"
/**
 **_strpbrk- execute function
 *@s: points to a char
 *@accept: points to a char
 *Return: pointer or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
	for (i = 0; *s; i++, s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				count++;
				return (s);
			}
		} /*end inner for*/
	} /*end outer for*/
	if (count == 0)
		return (0);
return (0);
} /*end function*/
