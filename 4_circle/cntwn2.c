#include <stdio.h>

int main()
{
	int x;
	int n=0;
	
	scanf("%d",&x);
	
	do		//��ִ��ѭ���壬�ٽ���ѭ�� 
	{
		n++;
		x/=10;
		printf("x=%d,n=%d\n",x,n);
	}while(x>0);		//�ֺ� 
	
	printf("%d\n",n);
	
	return 0;
}
