#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int fact=1;
	
	int i;
	for(i=1;i<=n;i++)		//���жϣ���ִ��ѭ���� 
	{
		fact=fact*i;
	}
	printf("%d!=%d",n,fact);
	
	return 0;
}
//�̶�������for
//����ִ��һ�Σ�do while 
