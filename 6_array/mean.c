#include <stdio.h>

int main()
{
	int num[100];			//�������� 
	int x;
	double sum=0;
	int cnt=0;
	scanf("%d",&x);
	
	while(x!=-1)
	{
		num[cnt]=x;			//��ֵ 
		sum+=x;
		cnt++;
		scanf("%d",&x);
	}
	if(cnt>0)
	{
		printf("ƽ����Ϊ%f\n",sum/cnt);
		printf("����ƽ��������Ϊ\n");
		int i;
		for(i=0;i<cnt;i++)
		{
			if(num[i]>sum/cnt)		//ʹ��Ԫ�� ��Ϊ��ֹԽ�磬1��������2��ǰ˵����Ҫ�±��� 
			{
				printf("%d\n",num[i]);
			}
		}
	}
	
	return 0;
}
