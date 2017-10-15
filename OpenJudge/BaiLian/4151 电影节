#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

struct Temp{
    int begtime;
    int endtime;
    bool operator < (const Temp &c){

        return endtime<c.endtime;

    }


}tmp[101];

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int m;
    for(int i=0;i<n;i++)
    {
        cin>>tmp[i].begtime>>tmp[i].endtime;

    }

    sort(tmp,tmp+n);
    int totalnum=1;
    int j=0;
    for(int i=1;i<n;i++)
    {

        //printf("%d %d ",tmp[i].begtime,tmp[i].endtime);
        if(tmp[j].endtime<=tmp[i].begtime)
        {
            j=i;
            totalnum++;
        }else
        {

        }
    }
    if(n==0)
    {
        printf("0\n");
    }else
    {
       printf("%d\n",totalnum);
    }

    }


    return 0;
}
