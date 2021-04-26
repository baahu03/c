#include<stdio.h>
int main()
{
	int i,j,k,l;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&k,&l);

	int a[k][l],b[k][l],c[k][l],s;
	printf("Enter the 9 elements of the first matrix: ");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


	printf("Enter the 9 elements of the secound matrix: ");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	z:
	printf("Enter the operation do you want perform\n");
	printf("1.Addition\t2.Substration\t3.Multiplication\t4.Exit\n");
	scanf("%d",&s);
	
	switch(s)
	{
		case 1:for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				}
			}
			printf("The addition of two given matrix is: \n");
			
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
					printf("\t%d\t",c[i][j]);
				}
				printf("\n");
			}
			break;
			

		case 2:for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
				}
			}
			printf("The substraction of two given matrix is: \n");
			
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
					printf("\t%d\t",c[i][j]);
				}
				printf("\n");
			}
			break;
	

		case 3:for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
					c[i][j]=a[i][j]*b[i][j];
				}
			}
			printf("The multiplication of two given matrix is: \n");
			
			for(i=0;i<k;i++)
			{
				for(j=0;j<l;j++)
				{
					printf("\t%d\t",c[i][j]);
				}
				printf("\n");
			}
			break;

		case 4: break;
	

		default: printf("Enter the appropriate option......!!!!!!\n");
			goto z;	
			break;
		
		
	}

	return 0;
}
