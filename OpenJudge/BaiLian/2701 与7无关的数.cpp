#include<stdio.h>


int main()
{
	int a;
	int arr[101]={0};
	for(int i=1;i<=69;i++)
	{
		if(i%7!=0)
		{
			arr[i]=i;
		}
		
	}
	for(int i=80;i<100;i++)
	{
		if(i%7!=0)
		{
			arr[i]=i;
		}
		
	}
	
	for(int i=7;i<=100;i+=10)
	{
		arr[i]=0;
	}
	long long sum=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		sum=sum+arr[i]*arr[i];
	}
	printf("%lld",sum);
	
		
	
	
	return 0;
}
