#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int str_len(char *);
char * str_rev(char *);
char * str_cpy(char *,char *);
char * str_cat(char *,char *);
int str_cmp(char *,char *);
int main()
{
	char s1[32],s2[32];
	printf("Enter string1:");
	scanf(" %[^\n]s",s1);
	printf("Enter string2:");
	scanf(" %[^\n]s",s2);
	printf("Length of string1 is %d.\n",str_len(s1));
	printf("Length of string2 is %d.\n",str_len(s2));
	printf("Reverse of string1 is %s.\n",str_rev(s1));
	printf("Reverse of string2 is %s.\n",str_rev(s2));
	str_rev(s1);
	str_rev(s2);
	printf("String1 after copying string2 to string1 is %s.\n",str_cpy(s1,s2));
	printf("Comparing both strings returned %d.\n",str_cmp(s1,s2));	
	printf("String 1 after concatinating string2 to string1 is %s.\n",str_cat(s1,s2));
	printf("Comparing both strings returned %d.\n",str_cmp(s1,s2));	
	return 0;
}
