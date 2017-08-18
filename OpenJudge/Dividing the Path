#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

const int INF = 1 << 30;
const int MAXL = 1000010;
const int MAXN = 1010;
int ways[MAXL];
int cows[MAXL];
int cowchange[MAXL];
int N, L, A, B;

struct FX {
	int x;
	int	F;
	FX(int xx = 0, int FF = 0) :x(xx), F(FF) {}
	bool operator < (const FX &p)const{
		return p.F<F;
	}


};

priority_queue<FX> qFx;



int main()
{
	cin >> N >> L;
	cin >> A >> B;
	A <<= 1;
	B <<= 1;
	memset(cowchange, 0, sizeof(cowchange));

	for (int i = 0; i<N; i++)
	{
		int s, e;
		cin >> s >> e;
		++cowchange[s + 1];
		--cowchange[e];
	}
	int item=0;
	for (int i = 0; i <= L; i++)
	{
		ways[i] = INF;
		
		item += cowchange[i];
		cows[i] = item;
	}

	for (int i = A; i <= B; i += 2)
	{
		if (!cows[i])
		{
			ways[i] = 1;
			if (i <= B + 2 - A)
			{
				qFx.push(FX(i, 1));
			}
		}
		
	}

	for (int i = B + 2; i <= L; i += 2)
	{
		if (!cows[i])
		{
			FX temp;
			while (!qFx.empty())
			{
				temp = qFx.top();
				if (temp.x < i - B)
				{
					qFx.pop();
				}
				else
				{
					break;
				}
			}
			if (!qFx.empty())
			{
				ways[i] = temp.F + 1;
			}
			

		}
		if (ways[i + 2 - A] != INF)
		{
			qFx.push(FX(i - A + 2, ways[i - A + 2]));
		}
	}

	if (ways[L] == INF)
	{
		cout << -1 << endl;
	}	
	else
	{
		cout << ways[L] << endl;
	}

	system("pause");
	return 0;
}
