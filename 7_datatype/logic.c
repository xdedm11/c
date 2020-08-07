 #include <stdio.h>
 //逻辑短路，不执行赋值等操作 
 int main()
 {
 	int a=-1;
 	if(a>0&&a++>1)
 	{
 		printf("yes");
	}
	printf("%d\n",a);
 	return 0;
 }
