#include <stdio.h>
int main()
{
	const int size=3;
	int board[size][size];
	int i,j;
	int numx,numy;
	int result=-1;	//-1û��Ӯ��1xӮ��0yӮ 
	//���� 
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&board[i][j]);
		}
	}
	//����� 
	for(i=0;i<size&&result==-1;i++)
	{
		numx=numy=0;
		for(j=0;j<size;j++)
		{
			if(board[i][j]==1)
			{
				numx++;
			}
			else
			{
				numy++;
			}
			if(numx==size)
			{
				result=1;
			}
			else if(numy==size)
			{
				result=0;
			}
		}
	}
	//�����
	if(result==-1)
	{
		for(j=0;j<size;j++)
		{
			numx=numy=0;
			for(i=0;i<size;i++)
			{
				if(board[i][j]==1)
				{
					numx++;
				}
				else
				{
					numy++;
				}
				if(numx==size)
				{
					result=1;
				}
				else if(numy==size)
				{
					result=0;
				}
			}
		}
	} 
	//������Խ���
	numx=numy=0;
	for(i=0;i<size;i++)
	{
		if(board[i][i]==1)
		{
			numx++;
		}
		else
		{
			numy++;
		}
		if(numx==size)
		{
			result=1;
		}
		else if(numy==size)
		{
			result=0;
		}
	}
	//���ζԽ���
	numx=numy=0;
	for(i=0;i<size;i++)
	{
		if(board[i][size-i-1]==1)
		{
			numx++;
		}
		else
		{
			numy++;
		}
		if(numx==size)
		{
			result=1;
		}
		else if(numy==size)
		{
			result=0;
		}
	}
	printf("%d",result);
	return 0;
}
