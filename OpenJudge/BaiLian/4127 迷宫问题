#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int head, rear;
int map[5][5];
int visited[5][5];

int dx[4] = { 0,1,-1,0 };
int dy[4] = { 1,0,0,-1 };

struct  node
{
	int x, y;
	int pre;
}num[50];

void print(int n)
{
	if (num[n].pre != -1)
	{
		print(num[n].pre);
		cout << "(" << num[n].x << ", " << num[n].y << ")" << endl;
	}
}

void bfs();
int main()
{
	memset(map, 0, sizeof(map));
	memset(visited, 0, sizeof(visited));

	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> map[i][j];
		}
	}

	cout << "(0, 0)" << endl;
	bfs();
	cout << "(4, 4)" << endl;
	system("pause");
	return 0;
}


void bfs()
{
	head = 0;
	rear = 0;
	num[rear].x = 0, num[rear].y = 0, num[rear++].pre = -1;
	while (head<rear)
	{
		for (int i = 0; i < 4; i++)
		{
			int bj1 = num[head].x + dx[i];
			int bj2 = num[head].y + dy[i];
			if (bj1 >= 5 || bj2 >= 5 || bj1 < 0 || bj2 < 0 || map[bj1][bj2] == 1)
			{
				continue;
			}
			map[bj1][bj2] = 1;
			num[rear].x = bj1;
			num[rear].y = bj2;
			num[rear].pre = head;
			rear++;
			if (bj1 == 4 && bj2 == 4)
			{
				print(head);
			}
			
		}
		head++;
	}

}
