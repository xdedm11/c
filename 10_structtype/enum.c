#include <stdio.h>

enum color{red,yello,green};
//int red=0,yello=1,green=2;

void f(enum color c)
{
	printf("%d\n",c);
}
int main()
{
	enum color t=red;
	f(t);
	return 0;
}
