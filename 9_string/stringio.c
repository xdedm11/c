#include <stdio.h>
 
int main()
{
	char word[8];
	scanf("%4s",word);		//读到空格、回车、tab暂停 ，即空格是分隔符 
	//%s之间加数字，表示最多读取位数；位数后的交给下一个读取的变量 
	printf("%s#\n",word);
	return 0;
}
