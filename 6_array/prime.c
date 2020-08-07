#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
	//ret=1为素数 
	int ret=1;
	int i;
	if(x==1||(x%2==0&&x!=2))
	{
		ret=0;
	}
	for(i=3;i<sqrt(x);i+=2)
	{
		if(x%i==0)
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
