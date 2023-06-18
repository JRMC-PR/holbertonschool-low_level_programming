#include <stdio.h>

int main(void)
{
	char c; 
	int i;
	long int r;
	long long int w;
	float o;

	printf("The byte size of a char is:%d byte(s).\n",sizeof(c));
	printf("The byte size of a int is:%d btyte(s).\n",sizeof(i));
	printf("The byte size of a long int is:%d byte(s).\n",sizeof(r));
	printf("The byte size of a long long int is:%d byte(s).\n",sizeof(w));
	printf("The byte size of a flot is:%d byte(s).\n",sizeof(o));

	return (0);
}
