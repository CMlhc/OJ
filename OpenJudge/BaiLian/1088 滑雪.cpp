#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct POINT{
	int x,y;
	int h;
	bool operator < (const POINT &p1)const
	{
		return h<p1.h;
	}
}num[10201];

int fild[101][101];
int ways[101][101];



int main()
{
	int R,C;
	cin>>R>>C;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cin>>fild[i][j];
			num[i*C+j].x=i;
			num[i*C+j].y=j;
			num[i*C+j].h=fild[i][j];
			ways[i][j]=1;
			
		}
	}
	sort(num,num+R*C);
	for(int i=1;i<R*C;i++)
	{
		int r=num[i].x;
		int c=num[i].y;
		if(num[i].h>fild[r-1][c]&&r>0)
		{
			ways[r][c]=max(ways[r][c],ways[r-1][c]+1);
		}
		if(num[i].h>fild[r+1][c]&&r+1<R)
		{
			ways[r][c]=max(ways[r][c],ways[r+1][c]+1);
		}
		if(num[i].h>fild[r][c-1]&&c>0)
		{
			ways[r][c]=max(ways[r][c],ways[r][c-1]+1);
		}
		if(num[i].h>fild[r][c+1]&&c+1<C)
		{
			ways[r][c]=max(ways[r][c],ways[r][c+1]+1);
		}
	}
	
	int maxnum=0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			maxnum=max(maxnum,ways[i][j]);
		}
	}
	
	cout<<maxnum<<endl;
	

	return 0;
}
