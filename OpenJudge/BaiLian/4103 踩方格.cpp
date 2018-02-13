#include<iostream>
#include<string.h>
using namespace std;

int way[50][50];
int ways(int i, int j, int n);

int main()
{
	memset(way, 0, sizeof(way));
	int n;
	cin >> n;
	cout << ways(0, 25, n) << endl;



	system("pause");
	return 0;
}

int ways(int i, int j, int n)
{
	if (n == 0)
	{
		return 1;
	}
	int num = 0;
	way[i][j] = 1;
	if (way[i + 1][j] == 0)
	{
		num += ways(i + 1, j, n - 1);
	}
	if (way[i][j + 1] == 0)
	{
		num += ways(i, j + 1, n - 1);
	}
	if (way[i][j - 1] == 0)
	{
		num += ways(i,j - 1, n - 1);
	}
	way[i][j] = 0;
	return num;

}
