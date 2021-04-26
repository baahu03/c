#include<stdio.h>
#include<stdlib.h>
void matchedindex(char *str, char *ch)
{
	int i=0,j=0;
	for(i=0;str[i]!='\0';i++)
	{       
               if(str[i]!=*ch)
		{
			str[j]=str[i];
			j++;
		}
        }
	str[j]='\0';
        return;
}
int main()
{
	char *str, ch='\0';
        int count = -1;
       	printf("\nEnter the string : ");
        str = (char*) calloc(30,sizeof(char));
        scanf(" %[^\n]s",str);
        printf("\nEnter the chararacter to delete :");
        scanf(" %c", &ch);
	matchedindex(str, &ch);
	printf("\nAfter deleting %c string is %s.\n",ch, str);
	return 0;
}                                                                                                           
