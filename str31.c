#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void sort(char **n,int r);
int main()
{
	char **n;
	int i,j,k,r,c,p;
	printf("Enter the numbrs of names: ");
	scanf(" %d ",&r);
	n=(char **)calloc(r,sizeof(char *));
	
	for(i=0;i<r;i++)
	{
		printf("\nEnter the size of name:\n");
		scanf(" %d",&c);		
		n[i]=(char *)calloc(c,sizeof(char));
		scanf(" %s",n[i]);
	}
	sort(n,r);
	printf("After soring : ");
	
	for(i=0;i<r;i++)
	{
			printf(" %s\n",n[i]);
	}
	return 0;
}
void sort(char** n, int r)
{
	int i,j;
	for(i=0;i<r-1;i++)
	{
		for(j=0;j<r-i-1;j++)
		{
			if(strcmp(n[j],n[j+1]>0))
			{
				char *t;
				t=(char *)calloc(30,sizeof(char));
				strcpy(t,n[j]);
				strcpy(n[j],n[j+1]);
				strcpy(n[j+1],t);
			}
		}
	}

}
