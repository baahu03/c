#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[10];
	char *ptr=NULL;
	printf("Enter the string:");
	scanf(" %[^\n]",a);
	ptr=(char *)malloc(strlen(a)*sizeof(char));
	if(ptr==NULL)
	{
		printf("The memory allocation is failed.\n");
		return -1;
	}
	for(int i=0;i<strlen(a);i++)
	{
		ptr[i]=a[i];
	}
	printf("The enterd string is : %s\n",ptr);
	free(ptr);
	return 0;
}
