#include<iostream>
#include<cstring>

using namespace std;
int M, N, T;
char map[210][210];
int visited[210][210];
int minL[210][210][30];
int minLen = 1 << 30;
int totalLen;
int totalCost;
void dfs(int x, int y);
struct startpoint
{
	int x;
	int y;
}start;

struct endpoint
{
	int x;
	int y;
}endg;

int main()
{
	cin >> M >> N >> T;
	memset(map, '#', sizeof(map));
	memset(visited, 0, sizeof(visited));
	memset(minL, 500, sizeof(minL));
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			char c;
			cin >>c;
			map[i][j] = c;
			if (c == '@')
			{
				start.x = i;
				start.y = j;
			}
			if (c == '+')
			{
				endg.x = i;
				endg.y = j;
			}
		}
	}
	totalLen = 0;
	totalCost = 0;
	visited[start.x][start.y] = 1;
	dfs(start.x, start.y);

	if (minLen < (1 << 30))
	{
		cout << minLen << endl;
	}
	else
	{
		cout << "-1" << endl;
	}

	system("pause");
	return 0;
}

void dfs(int x, int y)
{
	if (x == endg.x&&y == endg.y)
	{ 
		minLen = minLen < totalLen ? minLen : totalLen;
		return;
	}
	
	if (!visited[x - 1][y] && x > 1)
	{
		if (map[x - 1][y] == '#')
		{
			totalCost++;
		}

		if (totalCost > T || (totalLen +1>minLen)  )
		{
			
		}
		else
		{
			totalLen++;
			//minL[x-1][y][totalCost] = totalLen;
			visited[x - 1][y] = 1;
			dfs(x - 1, y);
			visited[x - 1][y] = 0;
			totalLen--;
		}
		if (map[x - 1][y] == '#')
		{
			totalCost--;
		}

	}
	if (!visited[x + 1][y] && x <M-1)
	{
		if (map[x + 1][y] == '#')
		{
			totalCost++;
		}
		if (totalCost > T ||(totalLen+1>minLen)  )
		{

		}
		else
		{
			totalLen++;
			//minL[x+1][y][totalCost] = totalLen;
			visited[x + 1][y] = 1;
			dfs(x + 1, y);
			visited[x + 1][y] = 0;
			totalLen--;
		}
		if (map[x + 1][y] == '#')
		{
			totalCost--;
		}

	}

	if (!visited[x ][y-1] && y > 1)
	{
		if (map[x ][y-1] == '#')
		{
			totalCost++;
		}
		if (totalCost > T || (totalLen+1 >minLen) )
		{

		}
		else
		{
			totalLen++;
			//minL[x][y - 1][totalCost] = totalLen;
			visited[x ][y-1] = 1;
			dfs(x , y-1);
			visited[x ][y-1] = 0;
			totalLen--;
		}
		if (map[x ][y-1] == '#')
		{
			totalCost--;
		}

	}

	if (!visited[x ][y+1] && y<N-1)
	{
		if (map[x ][y+1] == '#')
		{
			totalCost++;
		}
		if (totalCost > T || (totalLen+1>minLen) )
		{

		}
		else
		{
			totalLen++;
			//minL[x][y + 1][totalCost] = totalLen;
			visited[x ][y+1] = 1;
			dfs(x , y+1);
			visited[x ][y+1] = 0;
			totalLen--;
		}
		if (map[x ][y+1] == '#')
		{
			totalCost--;
		}

	}


}
