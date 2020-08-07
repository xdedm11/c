#include <stdio.h>
#include <stdlib.h>
//Dynamic memory allocation
int main()
{
	int number;
	int *a;
	int i;
	printf("输入数量");
	scanf("%d",&number);
	//int a[number];
	a=(int*)malloc(number*sizeof(int));
	//成功分配结果不为0 
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	free(a);//释放空间 
	return 0;
}
