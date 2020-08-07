 #include <stdio.h>
 
 int main()
 {
 	int a;		//int表示CPU和RAM之间寄存器位数
 	a=6;
 	printf("sizeof(a)=%d\n",sizeof(a++));	//静态运算符，括号里面不做运算
 	printf("a=%d",a);
 	return 0;
 }
