#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const double eps=1e-6;
struct Candy{
    int v;
    int w;
    bool operator < (const Candy &c){

        return double(v)/w-double(c.v)/c.w>eps;

    }


}candies[100];

int main()
{
    int n,w;
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>candies[i].v>>candies[i].w;

    }

    sort(candies,candies+n);
    int totalW=0;
    double totalV=0;

    for(int i=0;i<n;i++)
    {
        if(totalW+candies[i].w<=w)
        {
            totalV+=candies[i].v;
            totalW+=candies[i].w;
        }
        else
        {
            totalV+=candies[i].v*double(w-totalW)/candies[i].w;
            break;
        }
    }

    printf("%.1f",totalV);

    return 0;
}
