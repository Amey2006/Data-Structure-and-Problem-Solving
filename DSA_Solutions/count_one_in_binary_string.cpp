#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    int count_ones(string s)
    {
        int counter=0;
        int i=s.length()-1;
        while(i>=0)
        {
            if(s[i]-'0'!=0)
            {
                counter++;
            }
            i--;
        }
        return counter;
    }
};
int main()
{
    Solution s1;

    cout<<"Ones in string =  "<<s1.count_ones("0011100000100001");
    return 0;
}