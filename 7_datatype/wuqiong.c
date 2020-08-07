 #include <stdio.h>
 //判断浮点数相等用abs<1e-12 
 int main()
 {
 	printf("%f\n",12.0/0.0);	//带小数点的字面量是double，float需要用f或F的后缀 
 	printf("%f\n",-12.0/0.0);
 	printf("%f\n",0.0/0.0);
 	return 0;
 }
