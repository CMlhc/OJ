#include<iostream>
#include<string>
using namespace std;

string rep[14][2] = {
	" ","",
	"!!","",
	"(F)","F",
	"(V)","V",
	"!F","V",
	"!V","F",
	"V&V","V",
	"V&F","F",
	"F&V","F",
	"F&F","F",
	"V|V","V",
	"V|F","V",
	"F|V","V",
	"F|F","F"
};
string s;
int main()
{
	int count = 1;
	int t,i;
	while (getline(cin,s))
	{
		while (1)
		{
			for (i = 0; i < 14; i++)
			{
				if ((t = s.find(rep[i][0])) != string::npos)
				{
					s.erase(t, rep[i][0].length());
					s.insert(t, rep[i][1]);
					break;
				}
			}
			if (i == 14)
			{
				break;
			}
		}
		cout << "Expression " << count++ << ": " << s << endl;
	}


	system("pause");
	return 0;
}
