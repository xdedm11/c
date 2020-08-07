#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]="abc";
	char s2[]="aBc";
	printf("%d\n",strcmp(s1,s2));
	//相等返回0，（数组不能比较）
	//不相等 ：-1表示s1<s2 ;s1>s2时返回1
	return 0;
}
