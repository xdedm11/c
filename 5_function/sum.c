#include <stdio.h>
//����������븴�� 
//���βΣ�����ʱҲҪ�ӣ��� 
//��������ʱ��C���Ի��Զ�����ת����C++��Java�� 
//��{��}�ڶ������������Ч 
//���������������void���棻�����ڿհ���˼�ǲ�ȷ����ʲô���� 
//�����ڿ����������������������ܶ��� 
void sum(int,int);	//�������� 

int main()
{
	sum(1,10);
	sum(25,35);
	return 0;	//�������н��� 
}

void sum(begin,end)
{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d��%d�ĺ�Ϊ%d\n",begin,end,sum);
}
