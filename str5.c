#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int matchedindex(char *str1, char *str2)
{
	int i=0, j=0, count=0,x=strlen(str2);
	for(i =0; str1[i]!='\0'; i++)
	{
 		for(j =0; str2[j]!='\0'; j++)
		{
			if(str1[i] == str2[j])
			count++;
		}
		if(count==x)
		{
			return i+1;
		}
	}
	return 0;
}
int main()
{
	char *str1, *str2;
	int index = -1;
	printf("\nEnter the first string : ");
	str1 = (char*) calloc(30,sizeof(char));
	scanf(" %[^\n]s",str1);
	printf("\nEnter the 2nd string :");
	str2 = (char*) calloc(30,sizeof(char));
	scanf(" %[^\n]s",str2);
	index = matchedindex(str1, str2);
	if(index ==0)
		printf("\nMatching string not found\n");
	else
		printf("\n String Matched at index = %d. \n",(index+1-strlen(str2)));
	return 0;
}
