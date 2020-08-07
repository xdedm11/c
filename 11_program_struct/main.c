#include <stdio.h>	//只找指定目录 只有函数原型 	编译时默认引入所有标准库 
#include "max.h"	//首先找当前目录，没有再找指定目录 
#include "min.h"
//全局变量前加static，仅有该文件可用 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//一个c文件是一个编译单元，编译器每次仅处理一个编译单元
// 编译是编译一个文件，构建是链接整个项目 

int main(int argc, char *argv[]) 
{
	int a=5,b=6;
	printf("%d\n",max(a,all));
	return 0;
}
