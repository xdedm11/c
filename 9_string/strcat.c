#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char src[]="world";
	char dst[]="hello";
	strcat(dst,src);
	//strcat(dst,src),src����dst���� 
	//strcpy��strcat Ŀ�ĵ�û���㹻�ռ��Խ��
	//��strncpy��strncat//����n��ɾ�� 
	//strncmp�Ƚ�ǰn�� 
	printf("%s\n",dst);
	return 0;
}
