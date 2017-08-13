#include<iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int arr[30] = { 0 };
	int maxsum[30] = { 0 };

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		maxsum[i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <i; j++)
		{
			if(arr[i]<=arr[j])
			{
				maxsum[i] = max(maxsum[i], maxsum[j] + 1);
			}

				
		}
	}

	int num = -1;
	for (int i = 1; i <= n; i++)
	{
		
		if (maxsum[i] > num)
		{
			num = maxsum[i];
		}

			
	}
	
	cout << num << endl;
	
	return 0;
}
