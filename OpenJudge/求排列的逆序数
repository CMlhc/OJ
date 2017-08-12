#include<stdio.h>
void Merge_sort(int l,int r);
void Merge_nx(int l,int m,int r);
long long arr[100001]={0};
long long arr1[100001]={0};
long long sum=0;

int main()
{
	long long n;

	scanf("%lld",&n);
	for(long long i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	Merge_sort(0,n-1);
	
	printf("%lld",sum);
	
	return 0;
}

void Merge_sort(int l,int r)
{
	if(l<r)
	{
		long long mid=(l+r)>>1;
		Merge_sort(l,mid);
		Merge_sort(mid+1,r);
		Merge_nx(l,mid,r);
	}
}


void Merge_nx(int l,int m,int r)
{
	long long z=l,y=m+1;
	long long num=l;
	while(z<=m&&y<=r)
	{
		if(arr[z]<arr[y])
		{
			arr1[num++]=arr[z++];
		}
		else
		{
			arr1[num++]=arr[y++];
			sum+=(m-z+1);
		}
	}
	while(z<=m)
	{
		arr1[num++]=arr[z++];
	}
	while(y<=r)
	{
		arr1[num++]=arr[y++];
	}
	for(long long i=l;i<=r;i++)
	{
		arr[i]=arr1[i];	
	}
}
