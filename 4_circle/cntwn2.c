#include <stdio.h>

int main()
{
	int x;
	int n=0;
	
	scanf("%d",&x);
	
	do		//先执行循环体，再进入循环 
	{
		n++;
		x/=10;
		printf("x=%d,n=%d\n",x,n);
	}while(x>0);		//分号 
	
	printf("%d\n",n);
	
	return 0;
}
