#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct str
	{
		int x;
		char z;
	}s1;
	union u
	{
		int p;
		char q;
	}u1;
	printf("The size of structure is %ld.\n",sizeof(s1));
	printf("The size of union is %ld.\n",sizeof(u1));
	return 0;
}
