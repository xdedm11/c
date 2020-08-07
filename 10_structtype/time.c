#include <stdio.h>
struct time
{
	int hour;
	int minutes;
	int seconds;
};
struct time timeupdate(struct time now)
{
	++now.seconds;
	if(now.seconds==60)
	{
		now.seconds=0;
		++now.minutes;
		if(now.minutes==60)
		{
			now.minutes=0;
			++now.hour;
			if(now.hour==24)
			{
				now.hour=0;
			}
		}
	}
	return now;
}
int main()
{
	struct time testtime[3]={{11,59,59},{12,0,0},{10,59,1}};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d:%d:%d	",testtime[i].hour,testtime[i].minutes,testtime[i].seconds);
		testtime[i]=timeupdate(testtime[i]);
		printf("%d:%d:%d\n",testtime[i].hour,testtime[i].minutes,testtime[i].seconds);
	}
	return 0;
}
