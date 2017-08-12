#include<stdio.h>
void sort(long long arr[],long long l,long long r);

int main()
{
	long long n;
	long long arr[100001]={0};
	scanf("%lld",&n);
	for(long long i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	long long m;
	scanf("%lld",&m);
	sort(arr,0,n-1);
	for(long long i=0;i<m;i++)
	{
		printf("%lld\n",arr[n-1]);
		n--;
	}
	return 0;
}


void sort(long long arr[],long long l,long long r)
{
	if(l<r)
	{
		long long temp=arr[l];
		long long i=l;
		long long j=r;
		while(i<j)
		{
			while(i<j&&arr[j]>=temp)
				j--;
			if(i<j)
				arr[i++]=arr[j];
			while(i<j&&arr[i]<temp)
				i++;
			if(i<j)
				arr[j--]=arr[i];
		}
		arr[i]=temp;
		sort(arr,l,i-1);
		sort(arr,i+1,r);
		
	}
}
