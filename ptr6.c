#include<stdio.h>
#include<string.h>
void replace(char * ,int);
int main()
{
	char name[15];
	char *str;
	int len;
	printf("enter the string\n");
	scanf("%[^\n]s",name);
	str=name;
	len=strlen(name);
	replace(name,len);
	return 0;
}
void replace(char *s,int l)
{
	int i,count=0;
	for(i=0;i<l;i++)
	{
		if(*(s+i)==32)
		{
			*(s+i)='-';
			count++;
		}
	}
	printf("%s",s);
	printf("%d\n",count);
}
