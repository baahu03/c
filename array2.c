#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	int ch=0,dg=0,bl=0,tb=0;
	printf("Enter the string: ");
	scanf("%[^'\n']s",text);
	int s=strlen(text);
        printf("%d",s);
	for(int i=0;i<=s;i++)
	{
		if(text[i]>64&&text[i]<91)
		{
			++ch;
		}
		if(text[i]>96&&text[i]<123)
		{
			++ch;
		}
		if(text[i]>47&&text[i]<58)
		{
			++dg;
		}
		if(text[i]==32)
		{
			++bl;
		}
		if(text[i]==9)
		{
			++tb;
		}
	}
	printf("The number of character in %s string is %d.\n",text,ch);
	printf("The number of digits in %s string is %d.\n",text,dg);
	printf("The number of blank space in %s string is %d.\n",text,bl);	
	printf("The number of tab space in %s string is %d.\n",text,tb);
	return 0;
}
