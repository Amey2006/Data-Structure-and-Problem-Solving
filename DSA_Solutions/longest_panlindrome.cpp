// #include<iostream>
// #include<algorithm>
// using namespace std;
// class Solution
// {
//   public:
//   string longest_substring(string s)
//   {
//     int n=s.length();
//     int left;
//     int right;
//     int count=-1;
//     int maxlen=0;
//     string ans="";
//     string cur="";
//     for(int i=0;i<n;i++)
//     {
//         left=right=i;
//         cout<<"Substrings using center :  "<<s[i]<<endl;
//         while(left>=0 && right<n && s[left]==s[right])
//         {
//             cur=s.substr(left,(right-left+1));
//             if(cur.length()>ans.length())  ans=s.substr(left,(right-left+1));

//             cout<<"    "<<s.substr(left,((right-left)+1));
//             count=count+2;
//             left--;
//             right++;
//             maxlen=max(count,maxlen);
//         }
//         cout<<"\n----------------------------------------------------\n";
//         cout<<" ANS value  : "<<ans;
//         cout<<"\n----------------------------------------------------\n";

//     }
//     cout<<"Maxlen = "<<maxlen<<endl;
//     return ans;
//   }
   
// };
// int main()
// {
//     Solution s1;
//     // int n;
//     cout<<"Longest substring = "<<s1.longest_substring("babad")<<endl;
    
//     return 0;
// }

//****************************************************************************************************************************************** */














#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
  public:
  string longest_substring(string s)
  {
    
    
  }
   
};
int main()
{
    Solution s1;
    cout<<"Longest substring = "<<s1.longest_substring("babad")<<endl; 
    return 0;
}