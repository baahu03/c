#include<stdio.h>
int main()
{
	int i,j,k,l;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&k,&l);

	int a[k][l],b[k][l],c[k][l],s;
	printf("Enter the %d elements of the first matrix: ",(k*l));
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			a[i][j]=b[j][i];
		}
	}
		
	printf("After transpose the matrix is:\n");		
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("\t%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
