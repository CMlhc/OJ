#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;


struct MyStruct {
	char men[31];
	int age;
	int id;
}s[120],si[120];

int cmp(MyStruct a, MyStruct b)
{

	return a.age > b.age||(a.age==b.age&&a.id<b.id);
	
}

int cmp1(MyStruct a, MyStruct b)
{

	return a.id<b.id;

}

int main()
{
	int m = 0;
	cin >> m;
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> s[i].men >> s[i].age;
		s[i].id = i;

		if (s[i].age >= 60)
		{
			k++;
		}
		
	}

	
	sort(s,s+m , cmp);

	sort(s+k, s + m, cmp1);

	for (int i = 0; i < m; i++)
	{
		cout << s[i].men << endl;
	}

	





	system("pause");
	return 0;
}
