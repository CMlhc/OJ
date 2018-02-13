#include<stdio.h>

int main()
{
	int p,e,i,d;
	scanf("%d %d %d %d",&p,&e,&i,&d);
	long long k=d+1;
	
		for(k=d+1;(k-p)%23;k++);
		for(;(k-e)%28;k+=23);
		for(;(k-i)%33;k+=23*28);
		
	
	
	printf("%lld",k-d);
	
	return 0;
}
