#include <stdio.h>
struct point
{
	int x;
	int y;
};
struct point* getstruct(struct point*p)
{
	//����ָ��ָ��ṹ���� 
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	return p;
}
void output(struct point p)
{
	//print�ṹ������ֵ 
	printf("%d %d",p.x,p.y);
}
void print(const struct point* p)
{
	//printָ��ָ��ṹ������ֵ 
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
