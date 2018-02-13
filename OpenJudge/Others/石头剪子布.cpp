#include<iostream>
#include<string.h>

using namespace std;
int arr[101];

int main()
{
	int n;
	cin >> n;
	char a[15], b[15];
	int i;
	for(i=0;i<n;i++)
	{
		cin >> a >> b;
		if (a[0] == b[0])
		{
			arr[i] = 0;
		}
		if (a[0] =='R'&& b[0]=='S')
		{
			arr[i] = 1;
		}
		if (a[0] =='S'&& b[0]=='P')
		{
			arr[i] = 1;
		}
		if (a[0] =='P'&& b[0]=='R')
		{
			arr[i] = 1;
		}
		if (b[0] == 'R'&& a[0] == 'S')
		{
			arr[i] = 2;
		}
		if (b[0] == 'S'&& a[0] == 'P')
		{
			arr[i] = 2;
		}
		if (b[0] == 'P'&& a[0] == 'R')
		{
			arr[i] = 2;
		}


	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			cout << "Tie" << endl;
		}
		if (arr[i] == 1)
		{
			cout << "Player1" << endl;
		}
		if (arr[i] == 2)
		{
			cout << "Player2" << endl;
		}
	}

	system("pasue");
	return 0;
}
