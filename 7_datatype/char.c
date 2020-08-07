 #include <stdio.h>
 
 int main()
 {
 	char c,d;
 	int i;
 	/*
 	c=1,d='1';
 	printf("c=%d\n",c);
 	printf("d=%d",d);	//ASCII码 
 	*/
 	/*
 	scanf("%c",&c);
 	printf("c=%d\n",c);
 	printf("c=%c",c);
 	*/
 	scanf("%d",&i);
 	c=i;
 	printf("c=%d\n",c);
 	printf("c=%c",c); 	
 	//scanf("%d %c")	//中间有无空格不一样 
 	return 0;
 }
 
 //逃逸字符 
