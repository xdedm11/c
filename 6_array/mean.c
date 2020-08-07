#include <stdio.h>

int main()
{
	int num[100];			//定义数组 
	int x;
	double sum=0;
	int cnt=0;
	scanf("%d",&x);
	
	while(x!=-1)
	{
		num[cnt]=x;			//赋值 
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0)
	{
		printf("平均数为%f\n",sum/cnt);
		printf("大于平均数的数为\n");
		int i;
		for(i=0;i<cnt;i++)
		{
			if(num[i]>sum/cnt)		//使用元素 ；为防止越界，1计数避免2提前说明需要下标数 
			{
				printf("%d\n",num[i]);
			}
		}
	}
	
	return 0;
}
