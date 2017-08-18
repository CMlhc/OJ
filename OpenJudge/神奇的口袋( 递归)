#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int arr[21]={0};
int ways(int w,int k)
{
	if(w==0)
	{
		return 1;
	}
	
	if(k<=0)
	{
		return 0;
	}
	
	return ways(w,k-1)+ways(w-arr[k],k-1);
}


int main()
{
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	cout<<ways(40,n)<<endl;
	
	return 0;
}
