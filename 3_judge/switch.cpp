#include <stdio.h>

int main()
{
	int type;
	 
	printf("����");
	scanf("%d",&type);
	
	switch(type)	//ֻ����int���� 
	{
		case 1:		//���������ʽ�� 
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		default:
			printf("Ĭ��");
		case 4:
			printf("4");
			break;
	}
	return 0;

}
