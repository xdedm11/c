#include <stdio.h>

int main()
{
	//շת����� 
	int a,b;
	int t;
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;printf("���Լ��Ϊ%d",a);
	}
	
	return 0;
}
