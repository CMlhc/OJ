#include<cstdio>  
#include<iostream>  
#include<cmath>  
using namespace std;  
int n,m,x,engry;  
int main()  
{  
    scanf("%d%d%d",&m,&n,&x);  
    engry=n;//engry代表当前战斗力   
    while(engry<=m&&x)  
    {  
        x-=ceil(double (m)/engry);  
        if(x<0) break;  
        engry+=floor(double (m)/engry);  
    }  
    cout<<engry;  
}
