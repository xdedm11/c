#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

bool isleap(struct date d)
{
	bool leap=false;
	if((d.year%4==0&&d.year%100!=0)||d.year%400==0)
	{
		leap=true;
	}
	return leap;
}
int numberofdays(struct date d)
{
	int days;
	const int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(d.month==2&&isleap(d))
	{
		days=29;
	}
	else
	{
		days=dayspermonth[d.month-1];
	}
	return days;
}

 int main()
 {
 	struct date today,tomorrow;
 	printf("enter today's date:");
 	scanf("%d %d %d",&today.month,&today.day,&today.year);
 	
 	if(today.day!=numberofdays(today))
 	{
 		tomorrow.day=today.day+1;
 		tomorrow.month=today.month;
 		tomorrow.year=today.year;
	}
	else if(today.month==12)
	{
		//本年最后一天 
		tomorrow.day=1;
 		tomorrow.month=1;
 		tomorrow.year=today.year+1;
	}
	else
	{
		//本月最后一天 
		tomorrow.day=1;
 		tomorrow.month=today.month+1;
 		tomorrow.year=today.year;
	}
	printf("tomorrow'date is %d-%d-%d",tomorrow.year,tomorrow.month,tomorrow.day);
 	return 0;
 }
