#include <stdio.h>

int main(void)
{
	char c; 
	int i;
	long int r;
	long long int w;
	float o;

	printf("The byte size of a char is:%d.\n",sizeof(c));
	printf("The byte size of a int is:%d.\n",sizeof(i));
	printf("The byte size of a long int is:%d.\n",sizeof(r));
	printf("The byte size of a long long int is:%d.\n",sizeof(w));
	printf("The byte size of a flot is:%d.\n",sizeof(o));

	return (0);
}
