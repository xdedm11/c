#include <stdio.h>

int main()
{
	int x;
	//printf("������λ��");
	scanf("%d",&x);
	int t=x;
	int mask=1;
	while(t>9)
	{
		t/=10;
		mask*=10;
	}
	printf("mask=%d\n",mask);
	
	do
	{
		int d=x/mask;
		printf("%d ",d);
		x %=mask;
		mask /=10;
	} while(mask>0);
	
	return 0;
}
