
#include<stdio.h>
#include<string.h>




struct POINT
{
	int x,y,m;
	
}p[21];

int main()
{
	
	int d,n;
	scanf("%d",&d);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].m);
	}
	int max=0,maxnum=0;
	for(int i=0;i<1025;i++)
	{
		for(int j=0;j<1025;j++)
		{
			int insum=0;
			for(int k=0;k<n;k++)
			{
				if(p[k].x>=i-d&&p[k].x<=i+d&&p[k].y>=j-d&&p[k].y<=j+d)
				{
					insum+=p[k].m;
				}
			}
			if(max<insum)
			{
				max=insum;
				maxnum=1;
			}
			else if(max==insum)
			{
				maxnum++;
			}
		}
		
	}

	
	printf("%d %d",maxnum,max);
	
	return 0;
}
