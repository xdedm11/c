#include <stdio.h>
typedef union
	{
		int i;
		char ch[sizeof(int)];
	}chI;
	
int main()
{
	//�õ�һ���������ڲ��ֽ� 
	chI chi;
	int i;
	chi.i=1234;
	
	for(i=0;i<sizeof(int);i++)
	{
		printf("%02hhX",chi.ch[i]);
	}
	//��λ��ǰ 
	printf("\n");
	return 0;
}
