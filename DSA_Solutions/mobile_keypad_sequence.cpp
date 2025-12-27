#include<iostream>
using namespace std;
class Solution
{
    public: 
    void mobile_keypad_sequence(string str[],string input)
    {
        string output="";
        for(char c:input)
        {
            if(c==' ') output+="0";
            else{
                output=output+str[(c-'A')];
            }
        }
        cout<<"Sequence - >"<<output<<endl;
    }
};
int main()
{
    Solution s1;
    string str[]={
        "2",   "22",  "222", "3",   "33",   "333", "4",
        "44",  "444", "5",   "55",  "555",  "6",   "66",
        "666", "7",   "77",  "777", "7777", "8",   "88",
        "888", "9",   "99",  "999", "9999"
    };
    string s="GEEKSFORGEEKS ";
    s1.mobile_keypad_sequence(str,s);
    return 0;
}