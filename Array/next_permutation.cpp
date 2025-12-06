#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;
vector<int> next_permutation(vector<int>a,int n)
{
    int pivot;
    int d;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            pivot=i;
            break;
        }
    }
    for(int i=n-1;i>pivot;i--)
    {
        if(a[i]>a[pivot])
        {
            d=i;
            break;
        }
    }
    swap(a[pivot],a[d]);
    reverse(a.begin()+pivot+1,a.end());
    return a;
}
int main()
{
    vector<int> a={1,2,3,5,4,6};
    vector<int> b=next_permutation(a,a.size());
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ,";
    }
    return 0;
}