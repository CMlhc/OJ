#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int n = str.length();
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num++;
		}
	}
	cout << num << endl;
	system("pause");

	return 0;
}
