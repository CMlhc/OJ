#include<stdio.h>
#include<string.h>
#define N 1001

int main()
{
	int arr[1001]={0};

	int w[7]={0,1,2,3,5,10,20};
	int b[7];
	
	int a1,a2,a3,a4,a5,a6;
	scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6);
	int sum;
	for(b[1]=0;b[1]<=a1;b[1]++)
	{
		for(b[2]=0;b[2]<=a2;b[2]++)
		{
			for(b[3]=0;b[3]<=a3;b[3]++)
			{
				for(b[4]=0;b[4]<=a4;b[4]++)
				{
					for(b[5]=0;b[5]<=a5;b[5]++)
					{
						for(b[6]=0;b[6]<=a6;b[6]++)
						{
							sum=0;
							for(int i=1;i<=6;i++)
							{
								sum+=b[i]*w[i];
								arr[sum]=1;
							}	
						}
					}
				}
			}
		}
	}
	
	int num=0;
	for(int i=1;i<=1000;i++)
	{
		if(arr[i]==1)
		{
		num++;	
		}
	}
	
	printf("Total=%d",num);
	return 0;
}
