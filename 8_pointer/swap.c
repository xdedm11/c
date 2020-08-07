#include <stdio.h>

void swap(int* pa,int *pb)
{
	//需要返回多个值的场景 
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
//堆栈，自顶向下分配 
