#include <stdio.h>
	struct date
	{
		int month;
		int day;
		int year;
	};
int main()
{ 

	struct date today;
	today.month=05;
	today.day=25;
	today.year=2020;
	//struct date today={05,25,2020};
	//struct date today={.month=05,.year=2020};
	printf("Today's date is %d-%d-%d",today.year,today.month,today.day);
	return 0;
}
