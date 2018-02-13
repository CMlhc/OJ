#include<iostream>
#include<cstdio>
using namespace std;
int k;
int a[100005];
void swap(int & a,int & b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void Qsort( int a[], int s, int e )
{ 
    if(s >= e)  
        return;
    int k = a[s];  
    int i = s,j = e;
    while (i < j) 
    { 
        while ( j > i && a[j] >= k )
            --j;
        swap( a[i], a[j]);
        while ( i < j && a[i] <= k )
            ++i;
        swap( a[i], a[j]);

    }
    Qsort( a, s, i-1 );     
    Qsort( a, i+1, e );    
}

void arrangeRight(int a[],int k,int s,int e)
{
    if(s <= e)
    {
        int kk = a[s];  
        int i = s,j = e;
        while (i < j) 
        { 
            while ( j > i && a[j] >= kk )
                --j;
            swap( a[i], a[j]);
            while ( i < j && a[i] <= kk )
                ++i;
            swap( a[i], a[j]);

        }
        if(e - i + 1 == k)  return;
        else if(e - i + 1 > k)  arrangeRight(a,k,i+1,e);
        else                    arrangeRight(a,k-(e-i+1),s,i-1);
    }

} 

int main()
{
    int size;
    scanf("%d",&size);
    for(int i=0;i < size;++i)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    arrangeRight(a,k,0,size-1);
    Qsort(a,size-k,size-1);
    for(int i = size-1;i >= size - k;--i)
        printf("%d\n",a[i]);
    return 0;
}
