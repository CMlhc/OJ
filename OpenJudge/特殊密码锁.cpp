#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void SetBit(int &n, int i, int v)
{
	if (v)
		n |= (1 << i);
	else
		n &= ~(1 << i);
}

int GetBit(int n,int i)
{
	return (n >> i) & 1;
}

void FlipBit(int &n, int i)
{
	n ^= (1 << i);
}

int main()
{
	int oriLock;
	int Lock;
	int desLock;

	char line[40];
	desLock = Lock = oriLock = 0;
	cin >> line;
	int N = strlen(line);
	for (int i = 0; i < N; i++)
		SetBit(oriLock, i, line[i] - '0');
	cin >> line;
	for (int i = 0; i < N; i++)
		SetBit(desLock, i, line[i] - '0');

	int minTimes = 1 << 30;

	for (int p = 0; p < 2; p++)
	{
		Lock = oriLock;
		int times = 0;
		int curbutton = p;
		for (int i = 0; i < N; i++)
		{
			if (curbutton)
			{
				++times;
				if (i > 0)
					FlipBit(Lock, i - 1);
				FlipBit(Lock, i);
				if (i < N - 1)
					FlipBit(Lock, i + 1);
			}
			if (GetBit(Lock, i) != GetBit(desLock, i))
				curbutton = 1;
			else
				curbutton = 0;

			if (Lock == desLock)
				minTimes = min(minTimes, times);

		}


		

	}

	if (minTimes == 1 << 30)
		cout << "impossible" << endl;
	else
		cout << minTimes << endl;



	return 0;
}
