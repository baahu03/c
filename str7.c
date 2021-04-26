#include <stdio.h>
#include<string.h>
int main()
{
        char str[100];
        printf("Enter at-list 2 string with space:");
	scanf(" %[^\n]",str);  
        char* a = strtok(str," ");
	while(a!=NULL)
        {
        printf("%s\n",a);
        a=strtok(NULL," ");
        }
        return 0;
}
