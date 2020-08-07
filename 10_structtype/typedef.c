#include <stdio.h>
//typedef给结构类型起别名
 
typedef	struct date1
	{
		int month;
		int day;
		int year;
	}date;
//用date代替struct date1
	
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
