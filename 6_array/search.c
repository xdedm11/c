#include <stdio.h>

int search(int key,int a[],int length)	//������Ϊ��������ʱ����������һ���������������С 
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
	printf("����һ����");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1)
	{
		printf("%d���±�Ϊ%d��λ����",x,loc);
	}
	else
	{
		printf("������");
	}
	return 0;
}
