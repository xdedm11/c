#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int digit;	//取末位 
	int ret=0;	//结果 
	/*
	while(x>0)
	{
		digit=x%10;
		ret=ret*10+digit;
		printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
		x=x/10;
	}
	printf("%d",ret);
	*/
	while(x>0)			//700,007
	{
		digit=x%10;
		printf("%d",digit);
		ret=ret*10+digit;
		//printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
		x=x/10;
	}

	return 0;
}
