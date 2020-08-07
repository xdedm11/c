#include <stdio.h>

int main()
{
	//const int Amount=100;   //Magic number
	int Amount=100;
	int price=0;
	
	printf("输入金额（元）");
	scanf("%d",&price);
	
	printf("输入票面（元）");
	scanf("%d",&Amount);
	
	int change=Amount-price;
	printf("找你%d元\n",change);
	
	//return 0;
}
