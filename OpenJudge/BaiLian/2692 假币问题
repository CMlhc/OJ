#include<stdio.h>
#include<stdbool.h>

int time[12];
char left[3][7],right[3][7];
char num[3][7]; 

bool Balanced();

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int i;
		for(i=0;i<3;i++)
		{
			scanf("%s %s %s",left[i],right[i],num[i]);
		}
		for(i=0;i<12;i++)
		{
			time[i]=0;
		}
		for(i=0;i<12;i++)
		{
			time[i]=1;
			if(Balanced())
			{
				break;
			}
			time[i]=-1;
			if(Balanced())
			{
				break;
			}
			time[i]=0;
		}
		printf("%c is the counterfeit coin and it is ",'A'+i);
		if(time[i]==1)
		{
			printf("heavy.\n");
		}
		else
		{
			printf("light.\n");
		}
		
	}
	
	
	
	return 0;
}

bool Balanced()
{
	int lw,rw;
	
	for(int i=0;i<3;i++)
	{
		lw=0;
		rw=0;
		for(int j=0;j<6&&left[i][j]!=0;j++)
		{
			lw+=time[left[i][j]-'A'];
			rw+=time[right[i][j]-'A'];
		}	
		if(lw==rw&&num[i][0]!='e')
			return false;
		if(lw>rw&&num[i][0]!='u')
			return false;
		if(lw<rw&&num[i][0]!='d')
			return false;
	}
	return true;
	
}
