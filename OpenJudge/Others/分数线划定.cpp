#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;


struct MyStruct {
	int student;
	int point;
}s[5001];

int cmp(MyStruct a, MyStruct b)
{
	if (a.point == b.point)
	{
		return a.student<b.student;
	}
	
		return a.point>b.point;
}

int main()
{
	int m = 0, n = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i].student >> s[i].point;
	}
	int t = (floor)(m*1.5);
	sort(s, s + n, cmp);

	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].point >= s[t - 1].point)
		{
			k++;
		}
	}

	cout << s[t - 1].point << " " << k << endl;

	for (int i = 0; i < k; i++)
	{
		cout << s[i].student << " " << s[i].point << endl;
	}
	





	system("pause");
	return 0;
}
