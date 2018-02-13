#include<stdio.h>


int main()
{
	int arr[10005]={0};
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<=n;i++)
	{
		arr[i]=1;
	}
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		for(int j=a;j<=b;j++)
		{
			arr[j]=0;
		}	
	}
	int num=0;
	for(int i=0;i<=n;i++)
	{
		num+=arr[i];
	}
	printf("%d",num);
 	
		
	
	return 0;
}
