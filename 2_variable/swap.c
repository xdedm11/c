#include <stdio.h>

int main()
{
	int a=5,b=8;
	int t;	
	//scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d  %d",a,b);
	return 0;
}
