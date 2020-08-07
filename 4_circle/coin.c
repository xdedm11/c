#include <stdio.h>

int main()
{
	int x;
	int one,two,five;
	int exit=0;			//妙啊 
	 
	scanf("%d",&x);
	for(one=0;one<=10*x;one++)
	{
		for(two=0;two<=5*x;two++)
		{
			for(five=0;five<=2*x;five++)
			{
				if(one+two*2+five*5==10*x)
				{
					printf("%d个1角%d个2角%d个5角可得%d元\n",one,two,five,x);
					exit=1;
					break;	//只能跳出一层循环 
				}
			}
		if(exit) break;			//接力break 
		}
	if(exit) break;
	}
	return 0;
}
