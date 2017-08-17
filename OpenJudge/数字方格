#include<stdio.h>


int main()
{
	int n;
	scanf("%d",&n);
	int a1,a2,a3;
	int max=0;
	
	for(a1=0;a1<=n;a1++)
	{
		for(a2=0;a2<=n;a2++)
		{
			for(a3=0;a3<=n;a3++)
			{
				if(((a1+a2)%2==0)&&((a2+a3)%3==0)&&((a1+a2+a3)%5==0))
				{
					if(max<(a1+a2+a3))
					{
						max=a1+a2+a3;
					}
				}
			}
		}
	}
	
	printf("%d",max);
	
	
	return 0;
}
