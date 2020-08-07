#include <stdio.h>

int *f(void)
{
	int i=12;
	return &i;
	//返回本地变量地址，函数调用结束后指针丢失（给别人用） 
}

void g(void)
{
	int k=24;
	printf("k=%d\n",k);
} 

int main()
{
	int *p=f();
	printf("*p=%d\n",*p);
	g();
	printf("*p=%d\n",*p); 
}
