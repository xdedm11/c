#include <stdio.h>

int main()
{
	/* 
	printf("������ߵ�Ӣ�ߺ�Ӣ��");
	int foot,inch;
	
	scanf("%d%d",&foot,&inch);
	printf("�����%f��\n",(foot+inch/12.0)*0.3048);  //double
	*/ 
	printf("������ߵ�Ӣ�ߺ�Ӣ��");
	double foot,inch;
	
	scanf("%lf%lf",&foot,&inch);   //double lf
	printf("�����%f��\n",(foot+inch/12)*0.3048);  
	return 0;
}
