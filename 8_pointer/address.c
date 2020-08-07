#include <stdio.h>
//&取地址只能对变量，不能对表达式 
int main()
{
	int i=0;
	printf("0x%x\n",&i);		//十六进制输出 
	printf("0p%p",&i);		//地址输出 
	return 0;
}
//堆栈，自顶向下分配 
