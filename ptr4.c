#include<stdio.h>
#include<string.h>
int main()
{            int count=0;
	     char s[]={"we will teach you how to""Move a mountain""Level a building""Erase the past""Make a million"};
	     for(int i=0;i<100;i++)
	      {
		if(s[i]=='\0')
		{
			break;
		} 
		if(s[i]=='e')
		 {
		   ++count;	
     		 }
		
	      }
		printf("The value of e in the string is %d\n",count);
			return 0;

}
