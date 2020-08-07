#include <stdio.h>
//指针返回值，函数返回运行状态 
int divide(int a,int b,int *res)
{
	int ret=1;	//除法成功返回1，否则返回0 
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
