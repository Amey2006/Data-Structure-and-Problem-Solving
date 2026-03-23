#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    int majority_element(vector<int>arr)
    {
        int n=arr.size();
        int count=0;
        int ele=-1;
        for(int no:arr)
        {
            if(count==0)
            {
                ele=no;
                count=1;
            }
            else if(no == ele)
            {
                count++;
            }
            else count--;
        }

        count=0;
        for(int i:arr)
        {
            if(i==ele)count++;
        }
        if(count>n/2)return ele;
        else return -1;
    }
};