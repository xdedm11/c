#include <stdio.h>
//指针没有指向变量前不可使用（指针没有存储地址） 
void f(int*); 
void g(int);
int main()
{
	int i=6;
	printf("&i=%p\n",&i);
	f(&i);
	g(i);
	return 0;
}

void f(int *p)
{
	printf("p=%p\n",p);
	//可以访问外部变量 
	printf("*p=%d\n",*p);
	*p=26;		//改变了外部变量 
}

void g(int k)
{
	printf("k=%d",k);
}
