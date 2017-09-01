#include<iostream>
#include<string.h>

using namespace std;
int num,a,b ;

char way[40][40];
int color[40][40];

void DFS(int i, int j);

int main()
{

	int R, C;
	while (cin>>R>>C)
	{
		if (R == 0 && C == 0)
		{
			break;
		}

		memset(way, '#', sizeof(way));
		memset(color, 0, sizeof(color));


		for (int i = 1; i <= C; i++)
		{
			for (int j = 1; j <= R; j++)
			{
				cin >> way[i][j];
				if (way[i][j] == '@')
				{
					a = i;
					b = j;
				}
			}
		}
		num = 0;
		DFS(a, b);
		cout << num << endl;

	}



	system("pause");
	return 0;
}

void DFS(int i, int j)
{
	if (color[i][j])
	{
		return;
	}
	color[i][j] = 1;
	if (way[i][j + 1] == '.')
	{
		DFS(i, j + 1);
	}
	if (way[i][j - 1] == '.')
	{
		DFS(i, j - 1);
	}
	if (way[i + 1][j] == '.')
	{
		DFS(i + 1, j);
	}
	if (way[i - 1][j] == '.')
	{
		DFS(i - 1, j);
	}
	num++;
}
