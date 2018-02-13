#include<stdio.h>
#include<stdbool.h>

int ways[7][8]={0};
int temp[7][8]={0}; 

bool check();


int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6;j++)
		{
			scanf("%d",&temp[i][j]);
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
	

	for(int i=2;i<=6;i++)
	{
		for(int j=1;j<=6;j++)
		{
			ways[i][j]=temp[i-1][j]^ways[i-1][j]^ways[i-1][j-1]^ways[i-1][j+1]^ways[i-2][j];
		}
	}
	for(int i=1;i<=6;i++)
	{
		if(ways[6][i]==1)
		{
			return false;
		}
			
	}
	
	return true;
}
