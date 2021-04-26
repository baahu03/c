#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[10];
	int s;
	printf("Enter the string: ");
	gets(a);
	z:
	printf("1. lower to upper 2.upper to lower\n");
	printf("Enter the operation you want to perform: ");
	scanf(" %d",&s);
	
	switch(s)
	{
		case 1:
			printf("The Upper case of given string is: ");
			for(int i=0;i<strlen(a);i++)
			{
				printf("%c",toupper(a[i]));
			}
			printf("\n");
//			puts(a);
			break;
		case 2:
			printf("The lower case of given string is: ");
			for(int i=0;i<strlen(a);i++)
			{
				printf("%c",tolower(a[i]));
			}
			printf("\n");
//			puts(a);	
			break;
		default:
			printf("Select the appropriate option...!!!!!");
			goto z;
			break;
	}	
	return 0;
}
