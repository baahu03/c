#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int hr,min,sec,day,mo,yr;
	time_t(now);
	time(&now);
	printf("Today is: %s",ctime(&now));
	struct tm *local=localtime(&now);	
	hr=local->tm_hour;
	min=local->tm_min;
	sec=local->tm_sec;
	
	day=local->tm_mday;
	mo=local->tm_mon+1;
	yr=local->tm_year+1900;
	if(hr<12)
	{
		printf("Time is : %d %d %d am\n",hr,min,sec);
	}
	else
	{
		printf("Time is : %d %d %d pm\n",hr,min,sec);
	}
	printf("Date is : %d %d %d \n",day,mo,yr);
	return 0;
}
