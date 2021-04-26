#include<stdio.h>
#include<string.h>
int occ(char *,char);
int main()
{       
	char a[10],t;
	printf("Enter any string: ");
	scanf(" %[^\n]",a);
	printf("Enter the alphabet you want to search: ");
	scanf(" %c",&t);
	printf("The alphabet %c is occured at %d.",t,occ(a,t));
	return 0;
}
int occ(char *b,char t)
{
	int c=strlen(b)-1,i=c; 
       	while(*(b+i)!='\0')
	{
		if(b[c]==t)
        	{
			return c;
		}
		/*else 
		{
			return -1;
		}*/
		i--;c--;
     	}	
	return -1;
}
