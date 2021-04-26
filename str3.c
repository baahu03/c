#include<stdio.h>
#include<string.h>
#define s 100
int main()
{
	char a[s][s],t;
	int i,j,k,r,c,p;
	printf("Enter the numbrs of rows and columns: ");
	scanf(" %d %d",&r,&c);
	printf("Enter the %d chracters : \n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf(" %c",&a[i][j]);
		}
	}
	printf("Your data is: ");
	
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf(" %c",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<r;k++)
			{
				for(p=0;p<c;p++)
				{
					if(a[i][j]<a[k][p])
					{
						t=a[i][j];
						a[i][j]=a[k][p];
						a[k][p]=t;
					}
				}
			}
		}
	}
	printf("The data in ascending order is: ");
	
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf(" %c",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
