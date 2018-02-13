#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int K, N, R;
struct Road
{
	int d, L, t;
};
vector<vector<Road>> cityMap(110);

void dfs(int s);

int minLen = 1 << 30;
int totalLen;
int totalCost;
int Visistied[110];
int minL[110][10100];

int main()
{
	cin >> K >> N >> R;
	for (int i = 0; i < R; i++)
	{
		int s;
		Road r;
		cin >> s >> r.d >> r.L >> r.t;
		if (s != r.d)
			cityMap[s].push_back(r);
	}
	for (int i = 0; i < 110; ++i)
	{
		for (int j = 0; j < 10100; ++j)
		{
			minL[i][j] = 1 << 30;
		}
	}
	memset(Visistied, 0, sizeof(Visistied));
	totalLen = 0;
	totalCost = 0;
	Visistied[1] = 1;
	minLen = 1 << 30;
	dfs(1);
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

void dfs(int s)
{
	if (s == N)
	{
		minLen = minLen < totalLen ? minLen : totalLen;
	}

	for (int i = 0; i < cityMap[s].size(); i++)
	{
		int d = cityMap[s][i].d;
		if (!Visistied[d])
		{
			int cost = totalCost + cityMap[s][i].t;
			if (cost > K || (totalLen+cityMap[s][i].L>=minLen) || (totalLen + cityMap[s][i].L >= minL[d][cost]) )
			{
				continue;
			}
			minL[d][cost] = totalLen + cityMap[s][i].L;
			totalLen += cityMap[s][i].L;
			totalCost +=  cityMap[s][i].t;
			Visistied[s] = 1;
			dfs(d);
			Visistied[s] = 0;
			totalLen -= cityMap[s][i].L;
			totalCost -= cityMap[s][i].t;
		}
	}
}
