#include<iostream>
#include<string.h>
using namespace std;

int R, C;

int maxroomarea = 0;
int roomnum = 0;
int roomarea;

int room[60][60];
int color[60][60];


void DFS(int i, int j);

int main()
{
	memset(room, 0, sizeof(room));
	memset(color, 0, sizeof(color));
	cin >> R>> C;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> room[i][j];
		}
	}

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (color[i][j]==0)
			{
				roomarea = 0;
				roomnum++;
				
				DFS(i, j);
				maxroomarea = maxroomarea > roomarea ? maxroomarea : roomarea;
			}
		}
	}
	cout << roomnum << endl;
	cout << maxroomarea << endl;


	
	return 0;
}

void DFS(int i, int j)
{
	if (color[i][j] != 0)
	{
		return;
	}
		
	color[i][j] = roomnum;
	roomarea++;

	if ((room[i][j] & 1) == 0)
	{
		DFS(i , j-1);
	}
	if ((room[i][j] & 2) == 0)
	{
		DFS(i - 1, j);
	}
	if ((room[i][j] & 4) == 0)
	{
		DFS(i, j + 1);
	}
	if ((room[i][j] & 8) == 0)
	{
		DFS(i + 1, j);
	}


}
