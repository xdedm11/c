#include <stdio.h>

int f(void)
{
	static int all=1;
	//��̬���ر�������������������֣������ȫ�ֱ����� 
	//ȫ�������ڣ����������� 
	printf("in %s all=%d\n",__func__,all);
	all+=2;
	printf("again in %s all=%d\n",__func__,all);
	return all;
}
//__func__ָ��ǰ�������ַ��� 


int main()
{
	f();
	f();
	f();
	return 0;
}
