#include <stdio.h>
//尽量避免代码复制 
//无形参，调用时也要加（） 
//参数传递时，C语言会自动类型转换，C++与Java则不 
//块{内}内定义变量块外无效 
//若无输入变量则以void代替；（）内空白意思是不确定是什么参数 
//函数内可以声明其他函数，但不能定义 
void sum(int,int);	//函数声明 

int main()
{
	sum(1,10);
	sum(25,35);
	return 0;	//正常运行结束 
}

void sum(begin,end)
{
	int sum=0;
	int i;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	printf("%d到%d的和为%d\n",begin,end,sum);
}
