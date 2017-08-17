#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

char lena[1000];
char lenb[1000];
int arr[1000][1000];
int main()
{
	while(cin>>lena>>lenb)
	{
		int len1=strlen(lena);
		int len2=strlen(lenb);
		for(int i=0;i<=len1;i++)
		{
			arr[i][0]=0;
		}
		for(int j=0;j<=len2;j++)
		{
			arr[0][j]=0;
		}
		for(int i=1;i<=len1;i++)
		{
			for(int j=1;j<=len2;j++)
			{
				if(lena[i-1]==lenb[j-1])
				{
					arr[i][j]=arr[i-1][j-1]+1;
				}
				else
				{
					arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
				}
			}
		}
		cout<<arr[len1][len2]<<endl;
		
	}
	
	return 0;
}
