#include<stdio.h>
#define MOD 2147483647 

int main()
{
	int n;
	scanf("%d",&n);
	
	int math[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int num[13]={0};
	for(int i=1;i<=12;i++)
	{
		num[i]=num[i-1]+math[i-1]; 
	}
	long arr[1000]={0};
	
	for(int i=1;i<=n;i++)
	{
		int a,b,m,c,d;
		scanf("%d %d %d %d %d",&a,&b,&m,&c,&d);
		int pre,late;
		pre=num[a]+b;
		late=num[c]+d;
		int temp=late-pre;
		for(int i=1;i<=temp;i++)
		{
			m=(m*2)%MOD;
		}
		arr[i]=m;
	
	}
	
	for(int i=1;i<=n;i++)
	{
		printf("%ld\n",arr[i]);
	}
		
	
	
	return 0;
}
