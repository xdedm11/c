#include <stdio.h>
int main()
{
	const int size=3;
	int board[size][size];
	int i,j;
	int numx,numy;
	int result=-1;	//-1没人赢，1x赢，0y赢 
	//读入 
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&board[i][j]);
		}
	}
	//检查行 
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
	//检查列
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
	//检查主对角线
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
	//检查次对角线
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
