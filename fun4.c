#include<stdio.h>
#define SIZE 10 //size of array
void print_array(int arr[]);
void rotate_by_one(int arr[]);
int main()
{
	int i,n;
	int arr[SIZE];
	printf("enter 10 elements array:");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d ",&arr[i]);
	}
	printf("number of times to right rotate\n");
	scanf("%d",&n);
	n = n%SIZE;
	printf("array before rotation\n");
	print_array(arr);
	for(i=1;i<=n;i++)
	{
		rotate_by_one(arr);
	}
	printf("array after rotation\n");
	print_array(arr);
	return 0;
}
void rotate_by_one(int arr[])
{
	int i,last;
	last=arr[SIZE-1];
	for(i=SIZE-1;i>0;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = last;
}
void print_array(int arr[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d\n",arr[i]);
	}
}

