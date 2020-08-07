#include <stdio.h>

int search(int key,int a[],int length)	//数组作为函数参数时，必须用另一个参数传入数组大小 
{
	int ret=-1;
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i]==key)
		{
			ret=i;
			break;
		}
	}
	return ret;
}
int main()
{
	int a[]={[2]=5,6,[6]=7};
	printf("%d\n",sizeof(a)/sizeof(a[0]));
	int x;
	int loc;
	printf("输入一个数");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1)
	{
		printf("%d在下标为%d的位置上",x,loc);
	}
	else
	{
		printf("不存在");
	}
	return 0;
}
