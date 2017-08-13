#include<iostream>
using namespace std;
 
char A[201];
char B[201];
char C[401];
 
int N; 
 

short int dp[201][201];
 
int main()
{
    scanf("%d", &N);
    for(int k = 1; k <= N; ++k) 
    {
        memset(dp,0,sizeof dp);
        cin >> A >> B >> C;
        int lenA = strlen(A);
        int lenB = strlen(B);
 
        dp[0][0] = 1;
 
        for(int i = 0; i <= lenA; ++i)
        {
            for(int j = 0; j <= lenB; ++j)
            {
                if(i > 0 && (dp[i-1][j] == 1) && (C[i+j-1] == A[i-1]))
                {
                    dp[i][j] = 1;
                }
                if(j > 0 && (dp[i][j-1] == 1) && (C[i+j-1] == B[j-1]))
                {
                    dp[i][j] = 1;
                }
            }
        }
 
        printf("Data set %d: %s\n", k, dp[lenA][lenB] ? "yes" : "no");
    }
    return 0;
}
