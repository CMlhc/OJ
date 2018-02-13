#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[1001]={0};
	int temp[1001]={0};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		temp[i]=1;
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(arr[i]>arr[j])
			{
				temp[i]=max(temp[i],temp[j]+1);
			}
		}
	}
	
	int max=0;
	for(int i=1;i<=n;i++)
	{
		if(max<temp[i])
		{
			max=temp[i];
		}
	}
	printf("%d",max);
	return 0;
}
