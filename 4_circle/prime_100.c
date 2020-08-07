#include <stdio.h>

int main()
{
	int x;
	for(x=1;x<=100;x++)
	{
		int i;
		int isPrime=1;		//是素数 
		for(i=2;i<x;i++)		//嵌套循环，控制变量应该不同 
		{
			if(x%i==0)
			{
				isPrime=0;
				break;		//跳出循环;continue跳过本轮循环进入下一轮循环 
			}
		}
		if(isPrime==1)
		{
			printf("%d是素数\n",x);
		}
		else
		{
			printf("%d不是素数\n",x); 
		}
	}
	return 0;
}
