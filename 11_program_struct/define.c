#include <stdio.h>

#define pi 3.14159 
#define format "%f\n"
#define pi2 2*pi	//pi*2 ºê¶¨Òå¿É×¢ÊÍ 
#define prt printf("%f\n",pi); \
printf("%f\n",pi2)

int main()
{
	printf(format,pi2*3.0);
	prt;
	return 0;
}

