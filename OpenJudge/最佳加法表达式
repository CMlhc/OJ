#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <list>
#include <vector>
#include <stack>
#define mp make_pair
//#define P make_pair
#define MIN(a,b) (a>b?b:a)
//#define MAX(a,b) (a>b?a:b)
typedef long long ll;
typedef unsigned long long ull;
const int MAX=1e2+5;
const int INF=1e8+5;
using namespace std;
//const int MOD=1e9+7;
typedef pair<ll,int> pii;
const double eps=0.00000001;

string add(string x,string y)
{
    string re;
    int jin=0;
    for(int i=x.length()-1,j=y.length()-1;i>=0||j>=0;i--,j--)
    {
        re=" "+re;
        re[0]=(i>=0?x[i]-'0':0)+(j>=0?y[j]-'0':0)+jin;
        if(re[0]>=10)
            jin=1,re[0]=(re[0]%10)+'0';
        else
            jin=0,re[0]=re[0]+'0';
    }
    if(jin)
        re='1'+re;
    return re;
}
string mins(string x,string y)
{
    if(x.length()<y.length())
        return x;
    else if(y.length()<x.length())
        return y;
    else return x<y?x:y;
}
int m;
string x;
string dp[55][55];
int main()
{
    while(~scanf("%d",&m))
    {
        cin>>x;
        int len=x.length();
        x=" "+x;
        for(int i=0;i<=len;i++)
            dp[i][0]=x.substr(1,i);
        for(int j=1;j<=m;j++)
            for(int i=j+1;i<=len;i++)
                for(int s=j;s<i;s++)
                {
                    if(s==j)
                        dp[i][j]=add(dp[s][j-1],x.substr(s+1,i-s));
                    else
                        dp[i][j]=mins(dp[i][j],add(dp[s][j-1],x.substr(s+1,i-s)));
                }
        cout<<dp[len][m]<<"\n";
    }
}
