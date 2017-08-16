#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[200]={0};
	int pre[105]={0};
	int tail[105]={0};
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		pre[i]=tail[i]=1;
	}
	int max;
	for(int i=2;i<=n;i++)
	{
		max=pre[i];
		for(int j=i-1;j>=1;j--)
		{
			if(arr[j]<arr[i])
			{
				max=(max>pre[j]+1)?max:pre[j]+1;
			}
		}
		pre[i]=max;
	}
	
	for(int i=n-1;i>=1;i--)
	{
		max=tail[i];
		for(int j=i+1;j<=n;j++)
		{
			if(arr[j]<arr[i])
			{
				max=(max>tail[j]+1)?max:tail[j]+1;
			}
		}
		tail[i]=max;
	}
	max=tail[1]+pre[1];
	for(int i=2;i<=n;i++)
	{
		max=(max>tail[i]+pre[i])?max:pre[i]+tail[i];
	}
	printf("%d",n-max+1);
	
	
	
	return 0;
}
