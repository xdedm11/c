#include <stdio.h>
#include <math.h>

int isPrime(int x,int Primes[],int length)
{
	//Primes为递归素数表，判断是否能被已知且<x的素数整除 
	int ret=1;	//ret=1为素数 
	int i;

	for(i=0;i<length;i++)
	{
		if(x%Primes[i]==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}

int main()
{
	const int number=100;
	int prime[number];		//使用变量定义长度时，不可在定义时同时进行初始化赋值，需要在之后进行赋值
	prime[0]=2;			//第一个素数 
	int j;
	for(j=1;j<number;j++)
	{
		prime[j]=0;
		//printf("%d\n",prime[j]);
	}
	
	int count=1;		//第二个素数下标 
	int i=3;			//第二个素数 
	
	while(count<number)
	{
		if(isPrime(i,prime,count))
		{
			prime[count++]=i;		//记录素数,同时指针加1 
		} 
		i++;
	} 
	
	for(i=0;i<number;i++)
	{
		printf("%d",prime[i]);
		if((i+1)%5)			//每行输出5个数 
		{
			printf("\t");
		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}
