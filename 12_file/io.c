#include <stdio.h>

int main()
{
	printf("%09.2f\n",123.0);//width,填0 
	printf("%-9d\n",123);//左对齐 
	//printf返回输出字符数，scanf返回读入变量数 
	printf("%d",sizeof(int));
	return 0;
}
