#include<iostream>
#include<cstring>

using namespace std;
char n1[11] = { "- -- -----" };
char n2[11] = { "|   ||| ||" };
char n3[11] = { "|||||  |||" };
char n4[11] = { "  ----- --" };
char n5[11] = { "| |   | | " };
char n6[11] = { "|| |||||||" };
char n7[11] = { "- -- -- --" };

int main()
{
	char str[20];
	int s;
	while (true)
	{
		cin >> s >> str;
		int lengh = strlen(str);
		if (s == 0 )
		{
			break;
		}
		int num;
		//1
		for (int i = 0; i < lengh; i++)
		{
			num = str[i] - '0';
			cout << " ";
			for (int j = 0; j < s; j++)
			{
				cout << n1[num];
			}
			cout << "  ";
		}
		cout << endl;
		//2 and 3
		for (int j = 0; j < s; j++)
		{
			for (int i = 0; i < lengh; i++)
			{
				num = str[i] - '0';
				cout << n2[num];
				for (int k = 0; k < s; k++)
				{
					cout << " ";
				}
				cout << n3[num]<<" ";

			}
			cout << endl;
		}
		//4
		for (int i = 0; i < lengh; i++)
		{
			num = str[i] - '0';
			cout << " ";
			for (int j = 0; j < s; j++)
			{
				cout << n4[num];
			}
			cout << "  ";
		}
		cout << endl;
		//5 and 6
		for (int j = 0; j < s; j++)
		{
			for (int i = 0; i < lengh; i++)
			{
				num = str[i] - '0';
				cout << n5[num];
				for (int k = 0; k < s; k++)
				{
					cout << " ";
				}
				cout << n6[num]<<" ";

			}
			cout << endl;
		}
		//7
		for (int i = 0; i < lengh; i++)
		{
			num = str[i] - '0';
			cout << " ";
			for (int j = 0; j < s; j++)
			{
				cout << n7[num];
			}
			cout << "  ";
		}
		cout << endl;
		cout << endl;
		
	}

	
	return 0;
}
