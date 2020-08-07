#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int fact=1;
	
	int i;
	for(i=1;i<=n;i++)		//先判断，再执行循环体 
	{
		fact=fact*i;
	}
	printf("%d!=%d",n,fact);
	
	return 0;
}
//固定次数，for
//必须执行一次，do while 
