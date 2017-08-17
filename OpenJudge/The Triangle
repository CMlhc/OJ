#include<iostream>
#include<algorithm>
#define N 101
using namespace std;

int main()
{
	int arr[N][N]={0};
	int *maxsum;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	maxsum=arr[n];
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			maxsum[j]=max(maxsum[j],maxsum[j+1])+arr[i][j];
		}
	}
	printf("%d",maxsum[1]);
	return 0;
}
