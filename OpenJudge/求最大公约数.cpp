#include<stdio.h>


int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	if(a<b)
	{
		long long temp;
		temp=a;
		a=b;
		b=temp;
	}
	
	long long t=a%b; 
	while(t!=0)
	{
		a=b;
		b=t;
		t=a%b;
	}
	printf("%lld",b);	
	
	
	return 0;
}
