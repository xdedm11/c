#include <stdio.h>

int main()
{
	int x;
	int n=0;
	
	scanf("%d",&x);
	
	n++;
	x/=10;		//"0"这个边界条件 
	
	while(x>0)		//条件成立进入循环 
	{
		//循环体内要有改变条件的机会 ,死循环超时错误 
		//printf("in loop");
		n++;
		x/=10;
		printf("x=%d,n=%d\n",x,n);
	}
	printf("%d\n",n);
	
	return 0;
}
//测试程序：边界数据 
