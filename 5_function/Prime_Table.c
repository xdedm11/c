#include <stdio.h>
#include <math.h>

int isPrime(int x,int Primes[],int length)
{
	//PrimesΪ�ݹ��������ж��Ƿ��ܱ���֪��<x���������� 
	int ret=1;	//ret=1Ϊ���� 
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
	int prime[number];		//ʹ�ñ������峤��ʱ�������ڶ���ʱͬʱ���г�ʼ����ֵ����Ҫ��֮����и�ֵ
	prime[0]=2;			//��һ������ 
	int j;
	for(j=1;j<number;j++)
	{
		prime[j]=0;
		//printf("%d\n",prime[j]);
	}
	
	int count=1;		//�ڶ��������±� 
	int i=3;			//�ڶ������� 
	
	while(count<number)
	{
		if(isPrime(i,prime,count))
		{
			prime[count++]=i;		//��¼����,ͬʱָ���1 
		} 
		i++;
	} 
	
	for(i=0;i<number;i++)
	{
		printf("%d",prime[i]);
		if((i+1)%5)			//ÿ�����5���� 
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
