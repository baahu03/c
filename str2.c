#include<stdio.h>
#include<string.h>

char* str(char *,int,int);
int main()
{
	char a[10];
	char *m=a;
	int i,j;
	printf("Enter any string:");
	scanf(" %[^\n]",a);
	printf("Your string is :%s \n",a);
	j=strlen(a)-1;
        str(m,0,j);
	printf(" \nrevers string is: %s",a);	
	return 0;
}
  char* str(char *m, int s, int e)
     {
         char temp;
	if(s>=e)
	{
		return m;
	}else{
    	  temp=m[s];
	  m[s]=m[e];
	  m[e]=temp;
 	 return str(m,++s,--e);

	   }		 
     }

