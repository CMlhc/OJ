#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[9],b[9],c[9];
	for(int i=0;i<9;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<9;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<9;i++)
	{
		c[i]=a[i]+b[i];
		cout << setw(4) << c[i];
		if((i+1)%3==0)
		{
			cout<<endl;
		}
	}
	
	return 0;
}
