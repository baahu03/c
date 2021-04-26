#include<stdio.h>
int main()
{
	struct s
	{	
		unsigned int a:6;
		unsigned int b:4;
		unsigned int c:6;
	};

	struct s1
	{	
		unsigned int a:6=3;
		unsigned int b:4=5;
		unsigned int c:6=7;
	};

	return 0;
}
