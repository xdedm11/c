#include <stdio.h>

void minmax(int a[],int len,int *max,int *min)
{
	//�����д�������Ϊָ�룬�����ں�����Ҳ���Ըı�����ֵ ���β�Ҳ���Ը�Ϊָ��
	//��������� constָ�� 
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
