#include <stdio.h>
typedef union
	{
		int i;
		char ch[sizeof(int)];
	}chI;
	
int main()
{
	//得到一个变量的内部字节 
	chI chi;
	int i;
	chi.i=1234;
	
	for(i=0;i<sizeof(int);i++)
	{
		printf("%02hhX",chi.ch[i]);
	}
	//低位在前 
	printf("\n");
	return 0;
}
