#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char src[]="world";
	char dst[]="hello";
	strcat(dst,src);
	//strcat(dst,src),src附到dst后面 
	//strcpy与strcat 目的地没有足够空间会越界
	//用strncpy和strncat//多余n被删除 
	//strncmp比较前n个 
	printf("%s\n",dst);
	return 0;
}
