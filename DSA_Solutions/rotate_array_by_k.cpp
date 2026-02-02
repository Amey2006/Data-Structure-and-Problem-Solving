#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Rotate
{
    public:
    void rotate(vector<int>&arr,int k,bool right)
    {
        if(right)
        {
            k%=arr.size();
            reverse(arr.begin(),arr.end());
            reverse(arr.begin(),arr.begin()+k);
            reverse(arr.begin()+k,arr.end());
        }
        if(!right)
        {
            k%=arr.size();
            reverse(arr.begin(),arr.begin()+k);
            reverse(arr.begin()+k,arr.end());
            reverse(arr.begin(),arr.end());
        }
    }

};
int main()
{
    vector<int>arr={1,2,3,4,5};
    for(int i:arr)
    {
        cout<<" "<<i<<"  ";
    }
    cout<<"\n\n";
    Rotate r1;
    r1.rotate(arr,2,false);
    for(int i:arr)
    {
        cout<<" "<<i<<"  ";
    }
    return 0;
}