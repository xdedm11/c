#include <stdio.h>

int main()
{
	int x;
	int one,two,five;
	 
	scanf("%d",&x);
	for(one=0;one<=10*x;one++)
	{
		for(two=0;two<=5*x;two++)
		{
			for(five=0;five<=2*x;five++)
			{
				if(one+two*2+five*5==10*x)
				{
					printf("%d��1��%d��2��%d��5�ǿɵ�%dԪ\n",one,two,five,x);
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}
