#include <stdio.h>

int all;
//ȫ�ֱ��� ��û�г�ʼ�����Զ���0������ʱ����Ҫѡȡ����ǰ��֪��ֵ����ֵ 
//�����ڲ�����ͬ������������ʱ����ȫ�ֱ��� 
int f(void)
{
	printf("in %s all=%d\n",__func__,all);
	all+=2;
	printf("again in %s all=%d\n",__func__,all);
	return all;
}
//__func__ָ��ǰ�������ַ��� 


int main()
{
	printf("in %s all=%d\n",__func__,all);
	f();
	printf("again in %s all=%d\n",__func__,all);
	return 0;
}
