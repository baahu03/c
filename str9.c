#include<stdio.h>
#include<stdlib.h>
void expand(char *str1, char *str2)
{
	int k=0;
	char ch;
	while(*str1!='\0')
	{
		ch = *str1;
		switch(ch)
		{
			case '\n':
				str2[k++] = '\\';
				str2[k++] = 'n';
				break;
		
			case '	':
				str2[k++] = '\\';
				str2[k++] = 't';
				break;
			
			default:
				str2[k++] = *str1;
				break;
		}
		str1++;
	}
}
int main()
{
	char *str1,*str2;

	printf("\nEnter the string end with zero(0) :\n");
	str1 = (char*) calloc(30,sizeof(str1));
	scanf(" %[^'0']s",str1);
	str2 = (char*) calloc(30, sizeof(str2));

	expand(str1, str2);

	printf("\nAfter expansion strings : ");

	printf("\nString1 = %s",str1);
	printf("\nString2 = %s\n", str2);

	return 0;
}


