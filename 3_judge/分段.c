#include <stdio.h>

int main()
{
	int x;
	 
	printf("����");
	scanf("%d",&x);
	
	int f;
	
	if(x<0)
	{
		f=-1;
	}
	else if(x==0)	//���� 
	{
		f=0;
	}
	else
	{
		f=1;
	}
	//��һ���� 
	printf("%d",f);
	return 0;

}
