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
	printf("想一个1到100之间的数\n");
	
	do
	{
		printf("guess");
		scanf("%d",&a);
		count++;
		if(a>num)
		{
			printf("大了\n");
		}
		else if(a<num)
		{
			printf("小了\n");
		}
	}while(a!=num);
	printf("用了%d次猜到了答案\n",count);
	
	return 0;
}
