#include <stdio.h>
//typedef���ṹ���������
 
typedef	struct date1
	{
		int month;
		int day;
		int year;
	}date;
//��date����struct date1
	
int main()
{ 
	date today;
	//struct date1 today;
	today.month=05;
	today.day=25;
	today.year=2020;
	printf("Today's date is %d-%d-%d",today.year,today.month,today.day);
	return 0;
}
