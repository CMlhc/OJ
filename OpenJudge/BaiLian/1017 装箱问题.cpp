#include<stdio.h>


int main()
{	
	int x,y,a1,a2,a3,a4,a5,a6,n=0;
	int u[4]={0,5,3,1};
	while(scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6))
	{
		if(a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0)
		{
			break;
		}
		n=a4+a5+a6+(a3+3)/4;
		y=5*a4+u[a3%4];
		if(a2>y)
		{
			n+=(a2-y+8)/9;
		}
		x=36*n-a6*36-a5*25-a4*16-a3*9-a2*4;
		if(a1>x)
		{
			n+=(a1-x+35)/36;
		}
		printf("%d",n);
	}	
	
	return 0;
}
