 #include <stdio.h>
 
 int main()
 {
 	int a;		//int��ʾCPU��RAM֮��Ĵ���λ��
 	a=6;
 	printf("sizeof(a)=%d\n",sizeof(a++));	//��̬��������������治������
 	printf("a=%d",a);
 	return 0;
 }
