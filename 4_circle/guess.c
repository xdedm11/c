#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*
	srand(time(0));
	int a=rand();
	a%=100;
	printf("%d\n",a);
	*/
	srand(time(0));
	
	int a=0;
	int count=0;
	int num=rand()%100+1;
	printf("��һ��1��100֮�����\n");
	
	do
	{
		printf("guess");
		scanf("%d",&a);
		count++;
		if(a>num)
		{
			printf("����\n");
		}
		else if(a<num)
		{
			printf("С��\n");
		}
	}while(a!=num);
	printf("����%d�βµ��˴�\n",count);
	
	return 0;
}
