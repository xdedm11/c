#include <stdio.h>

int main()
{
	int x;
	for(x=1;x<=100;x++)
	{
		int i;
		int isPrime=1;		//������ 
		for(i=2;i<x;i++)		//Ƕ��ѭ�������Ʊ���Ӧ�ò�ͬ 
		{
			if(x%i==0)
			{
				isPrime=0;
				break;		//����ѭ��;continue��������ѭ��������һ��ѭ�� 
			}
		}
		if(isPrime==1)
		{
			printf("%d������\n",x);
		}
		else
		{
			printf("%d��������\n",x); 
		}
	}
	return 0;
}
