#include <stdio.h>

int main()
{
	FILE *fp=fopen("in.txt","r+");
	if(fp)
	{
		int num=123;
		fscanf(fp,"%d",&num);
		printf("%d\n",num);
		fclose(fp);
	}
	else
	{
		printf("can't open");
	}
	return 0;
}
