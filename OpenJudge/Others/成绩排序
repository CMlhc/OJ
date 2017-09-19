#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int n=0;

struct MyStruct
{
	int point;
	char name[30];
}s[30];

int cmp(const MyStruct &a, const MyStruct &b)
{
	return a.point > b.point || (a.point == b.point&&strcmp(a.name, b.name) < 0);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].name >> s[i].point;

	}

	sort(s , s + n , cmp);

	for (int i = 0; i < n; i++)
	{
		cout << s[i].name << " " << s[i].point << endl;
	}


	system("pause");
	return 0;
}
