#include<stdio.h>
#include<stdbool.h>

int ways[7][8]={0};
int pre[7][8]={0}; 
int temp[7][8]={0}; 

bool check();


int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6;j++)
		{
			scanf("%d",&pre[i][j]);
		}
	}
	
	for(int i=0;i<(1<<6);i++)
	{
		int k=i;
		for(int j=1;j<=6;j++)
		{
			ways[1][j]=k%2;
			k=k/2;
		}
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=6;j++)
			{
				temp[i][j]=pre[i][j];
			}
		}
	
		
		if(check())
		{
			break;
		}
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6;j++)
		{
			printf("%d ",ways[i][j]);
		}
		printf("\n");
	}
	
		
	
	
	return 0;
}

bool check()
{
	for(int i=1;i<=6;i++)
	{
		if(ways[1][i]==1)
		{
			temp[1][i]=!temp[1][i];
			temp[1][i-1]=!temp[1][i-1];
			temp[1][i+1]=!temp[1][i+1];
			temp[2][i]=!temp[2][i];
		}
	}

	for(int i=2;i<=6;i++)
	{
		for(int j=1;j<=6;j++)
		{
			if(temp[i-1][j]==1)
			{
				ways[i][j]=1;
				temp[i][j]=!temp[i][j];
				temp[i][j-1]=!temp[i][j-1];
				temp[i][j+1]=!temp[i][j+1];
				temp[i-1][j]=!temp[i-1][j];
				temp[i+1][j]=!temp[i+1][j];
			}
		}
	}
	for(int i=1;i<=6;i++)
	{
		if(ways[6][i]==1)
		{
			for(int k=0;k<7;k++)
			{
				for(int j=0;j<8;j++)
				{
					ways[k][j]=0;
				}
			}
			return false;
		}
			
	}
	
	return true;
}
