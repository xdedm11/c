#include <stdio.h>

int main()
{
	int x;
	 
	printf("输入");
	scanf("%d",&x);
	
	int f;
	
	if(x<0)
	{
		f=-1;
	}
	else if(x==0)	//级联 
	{
		f=0;
	}
	else
	{
		f=1;
	}
	//单一出口 
	printf("%d",f);
	return 0;

}
