#include<iostream>
#include<string.h>
using namespace std;

struct point {
	char map[10][10];
	int x;
};

int num;
void DFS(point tmp2, int k);
int n, k;
int main()
{
	
	while (cin>>n>>k)
	{
		if (n == -1 && k == -1)
		{
			break;
		}
		point tmp;
		tmp.x = -1;
		//memset(tmp.map, '.', sizeof(tmp.map));
		num = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> tmp.map[i][j];
			}
		}
		DFS(tmp, k);
		cout << num << endl;

	}


	
	return 0;
}

void DFS(point tmp2, int k)
{
	if (k == 0)
	{
		num++;
		return;
	}
	int i, j;
	for (i = tmp2.x + 1; i <= n - k; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (tmp2.map[i][j] == '#')
			{
				point tmp3;
				tmp3= tmp2;
				tmp3.x = i;
				int q;
				for ( q = i + 1; q < n; q++)
				{
					tmp3.map[q][j] = '.';
				}
				DFS(tmp3, k - 1);
			}
		}
	}

}
