#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char src[]="abc";
	char *dst=(char*)malloc(strlen(src)+1);
	strcpy(dst,src);
	//strcpy(dst,src)返回dst,不能重叠 
	//char *dst=(char*)malloc(strlen(src)+1);
	printf("%s\n",dst);
	free(dst);
	return 0;
}
