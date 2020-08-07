#include <stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	double c=(a+b)/2.0;
	printf("平均值为%f\n",c);
	
	double d;
	printf("%f",d=c=1);
	return 0;
}
