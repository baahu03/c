#include<stdio.h>
int main()
{
	float a[2][3]={1.1,1.2,1.3,2.1,2.2,2.3};
	float *p=NULL;
	p=&a[0][0];
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",(*(p+1)));
	printf("%p\n",(*(p+1)+1));
	printf("%p\n",(*(p)+1));
	printf("%p\n",(*(*(p+1)+1)));
	printf("%p\n",(*(*(p)+1)));
	printf("%p\n",(*(*(p+1))));
	printf("%p\n",(*(*(p)+1)+1));
	return 0;
}
