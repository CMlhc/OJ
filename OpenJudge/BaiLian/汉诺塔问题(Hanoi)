#include<stdio.h>

void Hanoi(int n,char left,char mid,char right);

int main()
{
	int n;
	char left,mid,right;
	scanf("%d %c %c %c",&n,&left,&mid,&right);
	Hanoi(n,left,mid,right);
	
	
	return 0;
} 


void Hanoi(int n,char left,char mid,char right)
{
	if(n==1)
	{
		printf("%d:%c->%c\n",n,left,right);
		return;
	}
	Hanoi(n-1,left,right,mid);
	
	printf("%d:%c->%c\n",n,left,right);
	
	Hanoi(n-1,mid,left,right);
}
