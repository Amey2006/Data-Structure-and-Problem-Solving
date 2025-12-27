#include<iostream>   
#include<unordered_map>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,4,5,5};
    unordered_map<int,int>um;
    um[0]=1;
    um.insert({1,1});
    for(int i=2;i<7;i++)
    {
        um[i]=arr[i];
    }
    um.erase(6);
    for(auto it:um)
    {
        cout<<"\n Key = "<<it.first<<"     Value = "<<it.second;
    }
    return 0;
}