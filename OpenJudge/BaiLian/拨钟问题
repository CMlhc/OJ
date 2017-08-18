#include<iostream>
using namespace std;

int main()
{
	int station[9] = { 0 };
	int movecount[9] = { 0 };
	for (int i = 0; i < 9; i++)
		cin >> station[i];
	int minTimes = 1000;
	for(int i1=0;i1<4;i1++)
		for (int i2 = 0; i2<4; i2++)
			for (int i3 = 0; i3<4; i3++)
				for (int i4 = 0; i4<4; i4++)
					for (int i5 = 0; i5<4; i5++)
						for (int i6 = 0; i6<4; i6++)
							for (int i7 = 0; i7<4; i7++)
								for (int i8 = 0; i8<4; i8++)
									for (int i9 = 0; i9 < 4; i9++)
									{
										if ((i1 + i2 + i4 + station[0]) % 4 ==0&& (i1 + i2 + i3 +i5+ station[1]) % 4 == 0 && (i2 + i3 + i6 + station[2]) % 4 == 0 && (i1 + i4 + i5 +i7+ station[3]) % 4 == 0 && (i1 + i3 + i5 + i7 + i9 + station[4]) % 4 == 0 && (i3 + i5 + i6 + i9 + station[5]) % 4 == 0 && (i4 + i7 + i8 + station[6]) % 4 == 0 && (i5 + i7 + i8 + i9 + station[7]) % 4 == 0 && (i6 + i8 + i9 + station[8]) % 4 == 0)
										{
											
											int sum = 0;
											sum = i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8 + i9;
											if (minTimes > sum)
											{
												minTimes = sum;
												movecount[0] = i1;
												movecount[1] = i2;
												movecount[2] = i3;
												movecount[3] = i4;
												movecount[4] = i5;
												movecount[5] = i6;
												movecount[6] = i7;
												movecount[7] = i8;
												movecount[8] = i9;


											}
										}
									}

	for (int cur = 0; cur < 9; cur++)
	{
		while(movecount[cur]--)
		{
			cout << cur+1 << " ";
		}
	}

	return 0;
}
