#include <stdio.h>
 
int main()
{
	int ch;
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	printf("EOF");
	//Ctrl+D
	//Ctrl+Z windows
	return 0;
}
