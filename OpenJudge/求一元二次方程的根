#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double a[100]={0};
	double b[100]={0};
	double c[100]={0};
	
	
	for(int i=0;i<n;i++)
	{
		
		scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
	}
	for(int i=0;i<n;i++)
	{
	
	if(b[i]*b[i]<4*a[i]*c[i])
	{		
		if(b[i]!=0)
		{
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-b[i] / (2*a[i]),sqrt(4*a[i]*c[i]-b[i]*b[i]) / (2*a[i]),-b[i] / (2*a[i]), sqrt(4*a[i]*c[i]-b[i]*b[i]) / (2*a[i]));
		}
		else
		{
			printf("x1=0.00000+%.5lfi;x2=0.00000-%.5lfi\n",sqrt(4*a[i]*c[i]-b[i]*b[i]) / (2*a[i]), sqrt(4*a[i]*c[i]-b[i]*b[i]) / (2*a[i]));
		}
			
	}
	else if(b[i]*b[i]>4*a[i]*c[i])
	{
		printf("x1=%.5lf;x2=%.5lf\n",(-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]), (-b[i] - sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]));
	}
	else 
	{
		printf("x1=x2=%.5lf\n", (-b[i] + sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]));
	}	
	}
	
	
	return 0;
}
