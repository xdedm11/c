#include <stdio.h>

int isPrime(int i)
{
	//ret=1为素数 
	int ret=1;
	int k;
	for(k=2;k<i-1;k++)
	{
		if(i%k==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}

int main()
{
	//输出m到n所有素数和 
	int m,n;
	int sum=0;
	int cnt=0;
	int i;
	
	scanf("%d %d",&m,&n);
	
	if(m==1) m=2;
	 
	for(i=m;i<=n;i++)
	{
		if(isPrime(i))
		{
			sum+=i;
			cnt++;		//跳出循环;continue跳过本轮循环进入下一轮循环 
		}
	}
	printf("%d个素数，和为%d",cnt,sum);
	return 0;
}
