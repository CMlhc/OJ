#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int arr[21]={0};

int ways[50][40]={0};//ways (i,j) 从j中凑体积为i的方法数 



int main()
{
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		ways[0][i]=1;
	}
	ways[0][0]=1;
	
	for(int i=1;i<=40;i++)
	{
		for(int j=1;j<=n;j++)
		{
			ways[i][j]=ways[i][j-1];
			if(i-arr[j]>=0)
			{
				ways[i][j]+=ways[i-arr[j]][j-1];
			}
		}
	}
	cout<<ways[40][n]<<endl;
	return 0;
}
