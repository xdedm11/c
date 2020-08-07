#include <stdio.h>

int f(void)
{
	static int all=1;
	//静态本地变量，出函数后变量保持（特殊的全局变量） 
	//全局生存期，本地作用域 
	printf("in %s all=%d\n",__func__,all);
	all+=2;
	printf("again in %s all=%d\n",__func__,all);
	return all;
}
//__func__指当前函数的字符串 


int main()
{
	f();
	f();
	f();
	return 0;
}
