#include<stdio.h>
#include<math.h>
int main()
{
	int arr[105][105]={0};
	int arr1[105][105]={0};
	int n=0;
	int m=0;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&arr[i][j]);
			arr1[i][j]=arr[i][j];
		}
	}
	
	for(int i=2;i<n;i++)
	{
		for(int j=2;j<m;j++)
		{	
			
			double r=(double)(arr1[i][j]+arr1[i-1][j]+arr1[i+1][j]+arr1[i][j-1]+arr1[i][j+1])/5;
			arr[i][j]=round(r);
		}
			
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
