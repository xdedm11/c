#include <stdio.h>

void swap(int* pa,int *pb)
{
	//��Ҫ���ض��ֵ�ĳ��� 
	int t=*pa;
	*pa=*pb;
	*pb=t;
}

int main()
{
	int a=5,b=6;
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
//��ջ���Զ����·��� 
