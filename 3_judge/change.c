#include <stdio.h>

int main()
{
	int price=0;
	int bill=0;
	
	printf("������");
	scanf("%d",&price);
	printf("����Ʊ��");
	scanf("%d",&bill);
	
	if(bill>=price)
	{
		printf("����%dԪ\n",bill-price);
	}
	else
	{
		printf("Ǯ����");
	}
	return 0;

}
