#include <stdio.h>

int main()
{
	const number=10;
	int x,i;
	int count[number];
	
	for(i=0;i<number;i++)	//或int count[number]={0}; 
	{
		count[i]=0;
	}
	printf("数组字节数为%d\n",sizeof(count));
	printf("数组元素数为%d\n",sizeof(count)/sizeof(count[0]));
	scanf("%d",&x);
	while(x!=-1)
	{
		if(x>=0&&x<=9)
		{
			count[x]++;
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++)
	{
		printf("%d：%d\n",i,count[i]);
	}
	
	return 0;
}
