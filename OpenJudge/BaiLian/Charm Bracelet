#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct Item
{
	int w,d;
}item[3500];

int f[13000];

int main()
{
	int N,M;
	cin>>N>>M;
	
	for(int i=1;i<=N;i++)
	{
		cin>>item[i].w>>item[i].d;
	}
	
	for(int j=0;j<=M;j++)
	{
		if(item[1].w<=j)
		{
			f[j]=item[1].d;
		}
		else
		{
			f[j]=0;
		}
	}
	
	for(int i=2;i<=N;i++)
	{
		for(int j=M;j>=0;j--)
		{
			if(item[i].w<=j)
			{
				f[j]=max(f[j],f[j-item[i].w]+item[i].d);
			}
		}
	}
	
	cout<<f[M]<<endl;;
	
	return 0;
}
