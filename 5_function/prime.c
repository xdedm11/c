#include <stdio.h>

int isPrime(int i)
{
	//ret=1Ϊ���� 
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
	//���m��n���������� 
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
			cnt++;		//����ѭ��;continue��������ѭ��������һ��ѭ�� 
		}
	}
	printf("%d����������Ϊ%d",cnt,sum);
	return 0;
}
