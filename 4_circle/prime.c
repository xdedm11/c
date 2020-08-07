#include <stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	int i;
	int isPrime=1;		//是素数 
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			isPrime=0;
			break;		//跳出循环;continue跳过本轮循环进入下一轮循环 
		}
	}
	if(isPrime==1)
	{
		printf("是素数");
	}
	else
	{
		printf("不是素数"); 
	}
	
	return 0;
}
