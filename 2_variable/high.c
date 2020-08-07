#include <stdio.h>

int main()
{
	/* 
	printf("输入身高的英尺和英寸");
	int foot,inch;
	
	scanf("%d%d",&foot,&inch);
	printf("身高是%f米\n",(foot+inch/12.0)*0.3048);  //double
	*/ 
	printf("输入身高的英尺和英寸");
	double foot,inch;
	
	scanf("%lf%lf",&foot,&inch);   //double lf
	printf("身高是%f米\n",(foot+inch/12)*0.3048);  
	return 0;
}
