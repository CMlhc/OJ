#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 10000

int arr[N+1];


void ddd(int n)
{
	memset(arr,1,sizeof(arr));
	int max=sqrt(n);
	arr[1]=0;
	for(int i=2;i<=max;i++)
	{
		if(arr[i])
		{
			for(int j=i+i;j<=n;j+=i)
			{
				arr[j]=0;
			}
		}
	}
	
}
int main()
{
	int q;
	scanf("%d",&q);
	ddd(N);
	
	if(q&1)
	{
		if(arr[q-2])
			printf("%d",2*(q-2));
		else
			printf("0");
	}
	else
	{
		int i,j;
		i=j=q/2;
		while(arr[i]==0||arr[j]==0)
		{
			i++;
			j--;	
		}
		printf("%d",i*j);
	}
	
	
	
	
	
	return 0;
}
