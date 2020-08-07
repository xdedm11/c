#include <stdio.h>

int main()
{
	int type;
	 
	printf("输入");
	scanf("%d",&type);
	
	switch(type)	//只能是int类型 
	{
		case 1:		//常量（表达式） 
			printf("1");
			break;
		case 2:
			printf("2");
			break;
		case 3:
			printf("3");
			break;
		default:
			printf("默认");
		case 4:
			printf("4");
			break;
	}
	return 0;

}
