#include <stdio.h>
//ָ�뷵��ֵ��������������״̬ 
int divide(int a,int b,int *res)
{
	int ret=1;	//�����ɹ�����1�����򷵻�0 
	if(b==0) ret=0; 
	else {
		*res=a/b;
	}
	return ret;
}
int main()
{
	int a=5,b=2;
	int c;
	
	if(divide(a,b,&c))
	{
		printf("%d",c);
	}
	return 0;
}
