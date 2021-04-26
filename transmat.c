#include<stdio.h>
void transmat(int [10][10],int [10][10],int ,int );
int main()
{
	int i,j,k,l;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d",&k,&l);
	int a[k][l],b[k][l];
	printf("Enter the %d elements of the first matrix: ",(k*l));
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
	//		b[i][j]=a[i][j];
		}
	}
        printf("the original matrix is: \n"); 
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
			b[i][j]=a[i][j];
		}
	}
	transmat(a,b,k,l);
	return 0;
}
void transmat(int x[10][10],int y[10][10],int k,int l)
{
        int i,j;
	for(i=0;i<k;i++)
	        {
		  for(j=0;j<l;j++)
		  {
                    y[i][j]=x[j][i];
	            	
	          }
		
		}
	printf("Aftre transpose:\n");
	for(i=0;i<k;i++)
	{
		for(j=0;j<l;j++)
		{
			printf("\t%d\t",y[i][j]);
		}
		printf("\n");
	}
	printf("%d%d%d%d",y[1][1],y[2][1],y[1][3],y[1][4]);
}
