#include <stdio.h>
//ָ��û��ָ�����ǰ����ʹ�ã�ָ��û�д洢��ַ�� 
void f(int*); 
void g(int);
int main()
{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	return 0;
}

void f(int *p)
{
	printf("p=%p\n",p);
	//���Է����ⲿ���� 
	printf("*p=%d\n",*p);
	*p=26;		//�ı����ⲿ���� 
}

void g(int k)
{
	printf("k=%d",k);
}
