#include<stdio.h>
#include<stdlib.h>
#define MAXLENGTH 30
void deletematch(char *str1, char *str2 )
{
	int count=0,i=0,j=0,k=0;
	for(i=0;str2[i]!='\0';i++)
	{
		count=0;
		for(j=0;str1[j]!='\0';j++)
		{
			if(str2[i]==str1[j])
			{
				count=1;
			}
		}
		if(count==0)
		{
			str2[k]=str2[i];
			k++;
		}
	}
	str2[j]='\0';
}
int main()
{
	char *str1,*str2;
	
	printf("Enter the first string\n");
	str1=(char*)calloc(MAXLENGTH,sizeof(char));
	scanf(" %[^\n]s",str1);
	printf("Enter the second string\n");
        str2=(char*)calloc(MAXLENGTH,sizeof(char));
        scanf(" %[^\n]s",str2);
	deletematch(str1,str2);
	printf("\n After deleting matching characters strings are : \n");
	printf("\n");
	printf("string1 : %s",str1);
	printf("\n\n");
	printf("String2 : %s\n",str2);
	return 0;
}
