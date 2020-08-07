#include <stdio.h>
struct point
{
	int x;
	int y;
};
struct point* getstruct(struct point*p)
{
	//读入指针指向结构变量 
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	return p;
}
void output(struct point p)
{
	//print结构变量的值 
	printf("%d %d",p.x,p.y);
}
void print(const struct point* p)
{
	//print指针指向结构变量的值 
	printf("%d %d",p->x,p->y);
}
int main()
{
	struct point y={0,0};
	getstruct(&y);
	output(y);
	output(*getstruct(&y));	
	print(getstruct(&y)); 
	return 0;
}
