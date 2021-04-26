#include<stdio.h>
#include<string.h>
void expand(char[],char[]);
int main()
{
	char c[20],r[10];
	printf("Enter the string: ");
	scanf(" %[^\n]s",c);
	printf("Enter the string: ");
	scanf(" %[^\n]s",r);
	expand(c,r);	
	return 0;
}
void expand(char c[20],char r[10])
{
	int i,j,k=0;
	char re[30];
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]=='-')
		{
			break;
		}
	}
	for(j=0;j<i;j++)
	{
		re[j]=c[j];	
	}
	for(;k<11;k++,j++)
	{
		re[j]=k;
	}
	for(i+=4;j<(strlen(c)+10-i);j++)
	{
		re[j]=c[i];
	}
	printf("The string after expand is: ");
	for(i=0;i<strlen(re);i++)
	{
		printf("%c",re[i]);
	}
}
