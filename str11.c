#include<stdio.h>
#include<string.h>
char * rotate(char *c)
{
	char t1;
	int i;
	for(i=0;i<=strlen(c)-2;i++)
	{
		t1=*(c+i);
		*(c+i)=*(c+i+1);
		*(c+i+1)=t1;
	}
	return c;
}
int main()
{
	char s[32];
	int i;
	printf("Enter a string:");
	scanf(" %[^\n]s",s);
	printf("%s\n",s);
	for(i=0;i<strlen(s)-1;i++)
	{
		printf("%s\n",rotate(s));
	}
	return 0;
}
