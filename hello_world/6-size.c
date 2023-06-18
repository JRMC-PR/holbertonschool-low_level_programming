#include <stdio.h>

int main(void)
{
	char c; 
	int i;
	long int r;
	long long int w;
	float o;

	printf("The byte size of a char is:",sizeof(c));
	printf("The byte size of a int is:",sizeof(i));
	printf("The byte size of a long int is:",sizeof(r));
	printf("The byte size of a long long int is:",sizeof(w));
	printf("The byte size of a flot is:",sizeof(o));

	return (0);
}
