#include<iostream>
#include<string.h>
using namespace std;
char Left[3][7];
char Right[3][7];
char Result[3][7];
bool IsFake(char c,bool light);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3;i++)
			{
				cin>>Left[i]>>Right[i]>>Result[i];
				
			}
		for(char c='A';c<='L';c++)
		{
			if(IsFake(c,true))
				cout<<c<<" is the counterfeit coin and it is light."<<endl;
			else if(IsFake(c,false))
				cout<<c<<" is the counterfeit coin and it is heavy."<<endl;
		}
		
	}
	return 0;
}

bool IsFake(char c,bool light)
{
	char *pLeft,*pRight;
	for(int i=0;i<3;i++)
	{
		if(light)
		{
			pLeft=Left[i];
			pRight=Right[i];		
		}
		else
		{
			pLeft=Right[i];
			pRight=Left[i];
		}
		switch(Result[i][0])
		{
			case 'e':
				if(strchr(pRight,c)||strchr(pLeft,c))
					return false;
				break;
			case 'u':
				if(strchr(pRight,c)==NULL)
					return false;
				break;
			case 'd':
				if(strchr(pLeft,c)==NULL)
					return false;
				break;	
		}
		
	}
	
	return true;
}
