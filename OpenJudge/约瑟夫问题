#include<stdio.h>


int main()
{	
	int n,m;
	while(scanf("%d %d",&n,&m))
	{
		if(n==0&&m==0)
		{
			break;
		}
		int arr[305]={0};
		
		
		int str=-1;
		int num=0;
		for(int i=1;i<n;i++)
		{
			num=0;
			while(num!=m)
			{
				str=(str+1)%n;
				
				if(arr[str]==0)
				{
					num++;
					if(num==m)
					{
						arr[str]=1;
					}
				}
				
			}
			
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				printf("%d\n",i+1);
				break;
				
			}
			
		}
		
	}
	return 0;
}
