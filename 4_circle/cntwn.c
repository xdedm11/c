#include <stdio.h>

int main()
{
	int x;
	int n=0;
	
	scanf("%d",&x);
	
	n++;
	x/=10;		//"0"����߽����� 
	
	while(x>0)		//������������ѭ�� 
	{
		//ѭ������Ҫ�иı������Ļ��� ,��ѭ����ʱ���� 
		//printf("in loop");
		n++;
		x/=10;
		printf("x=%d,n=%d\n",x,n);
	}
	printf("%d\n",n);
	
	return 0;
}
//���Գ��򣺱߽����� 
