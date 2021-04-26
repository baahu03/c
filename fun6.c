#include<stdio.h>
#include<string.h>
#include<ctype.h>
void con(char[]);
int main()
{
	char a[20];
	printf("Enter the string: ");
	scanf("%[^'\n']s",a);
	con(a);
	return 0;
}
void con(char x[])
{
	for(int i=0;i<strlen(x);i++)
	{
		x[i]=tolower(x[i]);
	}
	printf("Aftre converting the string it becomes %s",x);	
}
