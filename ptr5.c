#include<stdio.h>
int main()
{
	unsigned int n=1;
	char *ch=(char*)&n;
	if(*ch)
	{
	printf("\nprocessor is little endian\n\n");
	}
	else
	{
	printf("\nprocessor is big endian\n\n");
	}
	return 0;
}
