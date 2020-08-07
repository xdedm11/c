#include <stdio.h>
#define cube(x) ((x)*(x)*(x))
//无类型，为保证计算顺序，里外加（） 

int main() 
{
	
	printf("%d\n",cube(5));
	return 0;
}
