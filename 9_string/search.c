#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[]="hello";
	char *p=strchr(s,'l');
	printf("%s\n",p);
	//µÚ¶þ¸öl
	char *t=(char*)malloc(strlen(p)+1);
	strcpy(t,p);
	printf("%s",t);
	free(t);
	return 0;
}
