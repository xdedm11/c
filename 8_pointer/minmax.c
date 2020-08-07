#include <stdio.h>

void minmax(int a[],int len,int *max,int *min)
{
	//函数中传入数组为指针，所以在函数中也可以改变数组值 ，形参也可以改为指针
	//数组变量是 const指针 
	int i;
	*min=*max=a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]<*min)
		{
			*min=a[i];
		}
		if(a[i]>*max);
		{
			*max=a[i];
		}
	}
}
int main()
{
	int a[]={1,2,3,4,5,5,6,6,7,8};
	int min,max;

	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("max=%d\n",max);
	printf("min=%d",min);
	return 0;
}
