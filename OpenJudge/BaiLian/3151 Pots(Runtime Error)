#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <queue>
using namespace std;

int a, b, c;
struct node
{
	int a, b;
	int cnt;
};

void bfs();
node init(int num1, int num2, int num3)
{
	node tmp;
	tmp.a = num1;
	tmp.b = num2;
	tmp.cnt = num3;
	return tmp;
}

node father[105][105];
int vis[1005][1005];
queue<node> que;
string s[100];


void print(node ans)
{
	cout << ans.cnt << endl;
	int k = 0;
	while (1)
	{
		if (ans.a == 0 && ans.b == 0)
		{
			break;
		}
		node pre = father[ans.a][ans.b];
		if (ans.b == pre.b)
		{
			if (ans.a == 0)
			{
				s[k++] = "DROP(1)";
			}
			else
			{
				s[k++] = "FILL(1)";
			}
		}
		else if (ans.a==pre.a)
		{
			if (ans.b == 0)
			{
				s[k++] = "DROP(2)";
			}
			else
			{
				s[k++] = "FILL(2)";
			}
		}
		else if((ans.a==0&&ans.b!=pre.b)||(ans.a!=pre.a&&ans.b==b))
		{
			s[k++] = "POUR(1,2)";
		}
		else
		{
			s[k++] = "POUR(2,1)";
		}

		ans.a = pre.a;
		ans.b = pre.b;

		

	}
for (int i = k - 1; i >= 0; i--)
		{
			cout << s[i] << endl;
		}

}



int main()
{
	cin >> a >> b >> c;
	
	memset(vis, 0, sizeof(vis));
	memset(father, 0, sizeof(father));
	bfs();
		
	



	system("pause");
	return 0;
}

void bfs()
{
	node zero = init(0, 0, 0);
	que.push(zero);
	vis[0][0] = 1;
	while (!que.empty())
	{
		node front = que.front();
		que.pop();
		node tmp;
		if (front.a == c || front.b == c)
		{
			print(front);
			return;
		}

		if (front.a != 0 && !vis[0][front.b])
		{
			tmp = init(0, front.b, front.cnt + 1);
			que.push(tmp);
			vis[0][front.b] = 1;
			father[0][front.b] = front;
		}

		if (front.b != 0 && !vis[front.a][0])
		{
			tmp = init(front.a, 0, front.cnt + 1);
			que.push(tmp);
			vis[front.a][0] = 1;
			father[front.a][0] = front;
		}

		if (front.a != a && !vis[a][front.b])
		{
			tmp = init(a, front.b, front.cnt + 1);
			que.push(tmp);
			vis[a][front.b] = 1;
			father[a][front.b] = front;
		}

		if (front.b != b&&!vis[front.a][b])
		{
			tmp = init(front.a, b, front.cnt + 1);
			que.push(tmp);
			vis[front.a][b] = 1;
			father[front.a][b] = front;
		}

		if (front.a > 0 && front.b < b)
		{
			int need = b - front.b;
			if (front.a > need && !vis[front.a - need][b])
			{
				tmp = init(front.a - need, b, front.cnt + 1);
				que.push(tmp);
				vis[front.a - need][b] = 1;
				father[front.a - need][b] = front;
			}
			else if(!vis[0][front.b+front.a])
			{
				tmp = init(0, front.b + front.a, front.cnt+1);
				que.push(tmp);
				vis[0][front.a + front.b] = 1;
				father[0][front.b + front.a] = front;
			}
		}

		if (front.b > 0 && front.a < a)
		{
			int need = a - front.a;
			if (front.b > need && !vis[a][front.b - need])
			{
				tmp = init(a, front.b - need, front.cnt + 1);
				que.push(tmp);
				vis[a][front.b - need] = 1;
				father[a][front.b - need] = front;
			}
			else if (!vis[front.a + front.b][0])
			{
				tmp = init(front.a + front.b, 0, front.cnt + 1);
				que.push(tmp);
				vis[front.a + front.b][0] = 1;
				father[front.a + front.b][0] = front;
			}
		}

	}

	cout << "impossible\n" << endl;
}
