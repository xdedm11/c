#include <stdio.h>
 
int main()
{
	//char *s="hello";
	char s[]="hello";
	s[0]='H';		//代码段，只读 
	//如果想修改字符串，应该用数组
	
	printf("%c\n",s[0]);
	return 0;
}
