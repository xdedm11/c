#include <stdio.h>
#include <string.h>

int main()
{
	char s1[]="abc";
	char s2[]="aBc";
	printf("%d\n",strcmp(s1,s2));
	//��ȷ���0�������鲻�ܱȽϣ�
	//����� ��-1��ʾs1<s2 ;s1>s2ʱ����1
	return 0;
}
