#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <iterator> 
using namespace std;

int arr[1024] ;

int main()
{
	int m;
	int n, k;
	scanf("%d", &m);
	
	while (m--)
	{
		
		scanf("%d %d", &n, &k);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		for (int j = 0; j < k; j++)
		{
			next_permutation(arr, arr + n);
			
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		
	}



	return 0;
}
