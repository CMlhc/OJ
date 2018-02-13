#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
using namespace std;


int main()
{
	string arr;
	getline(cin,arr);
	
	int i;
	for (i = 0; i < arr.length(); i++)
	{
		if (arr[i] == 'z')
		{
			cout << "a";
			
		}else if (arr[i] == 'Z')
		{
			cout << "A";
			
		}else if (arr[i] >= 'a'&&arr[i] <= 'y')
		{
			cout << char(arr[i] + 1);
		}else if (arr[i] >= 'A'&&arr[i] <= 'Z')
		{
			cout << char(arr[i] + 1);
		}
		else
		{
			cout << arr[i];
		}
		
	}
	system("pause");

	return 0;
}
