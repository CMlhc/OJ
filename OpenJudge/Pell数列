#include<iostream>
#include<algorithm>
#define MOD 32767
using namespace std;

int main()
{
	int m;
	int a,b,c,n;
	cin>>m;
	while(m--)
	{
		cin>>n;
		if(n<3)
		{
			if(n==1) cout<<"1"<<endl;
			else
			{
				cout<<"2"<<endl;
			} 
			
			continue;
		}
		a=0;
		b=1;
		c=2;
		n-=2;
		while(n--)
		{
			swap(a,b);
			swap(b,c);
			c=(b*2+a)%MOD;
			
		}
		printf("%d\n",c);
		
	}
	
	
	return 0;
}
