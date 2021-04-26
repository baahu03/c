#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char a[20];
	printf("Enter your name:\n");
	scanf("%[^\n]",a);
	printf("%ld\n",strlen(a));
	printf("%ld\n",sizeof(a));
	return 0;
}
