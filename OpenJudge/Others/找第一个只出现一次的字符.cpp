#include<iostream>
#include<string.h>

using namespace std;
char arr[1000001];

int main()
{
	cin >> arr;
	int len= strlen(arr);
	int i, j;
	int flage;
	for (i = 0; i < len; i++)
	{
		flage = 0;
		for (j = 0; j < len; j++)
		{
			if (arr[i] == arr[j]&& i!=j)
			{
				flage = 1;
				continue;
			}
		}
		if (flage == 0)
		{
			
			cout << arr[i] << endl;
			break;
		}
	}
	if (flage == 1)
	{
		cout << "no" << endl;
	}
	system("pause");

	return 0;
}
