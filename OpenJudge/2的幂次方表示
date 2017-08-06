#include<iostream>
#include<cmath>
#define Max 142
using namespace std;


void Amain(int n)
{
	if (n == 1)
	{
		cout << "2(0)";
		return;
	}	
	if (n == 2)
	{
		cout << "2";
		return;
	}
	if (n == 3)
	{
		cout << "2+2(0)";
		return;
	}

	for (int i = 0; i< Max; i++)
	{
		if (n >=pow(2, i) && n <pow( 2, i+1))
		{
			cout << "2(";
			Amain(i);
			cout << ")";
			if (n - pow(2, i) > 0)
			{
				cout << "+";
				Amain(n - pow(2, i));
			}

		}
	}

}



int main()
{
	int n;
	cin >> n;
	Amain(n);

	system("pause");
	return 0;
}
