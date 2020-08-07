#include <stdio.h>

int all;
//全局变量 ，没有初始化，自动得0；定义时必须要选取编译前已知的值来赋值 
//函数内部定义同名变量，会暂时隐藏全局变量 
int f(void)
{
	printf("in %s all=%d\n",__func__,all);
	all+=2;
	printf("again in %s all=%d\n",__func__,all);
	return all;
}
//__func__指当前函数的字符串 


int main()
{
	printf("in %s all=%d\n",__func__,all);
	f();
	printf("again in %s all=%d\n",__func__,all);
	return 0;
}
