#include<iostream>
using namespace std;
class Solution
{
  public:
  int fibonacci(int n)
  {
   if(n<=1)  return n;
   else return fibonacci(n-1)+fibonacci(n-2);
  }  
};
int main()
{
    Solution s1;
    int n;
    cout<<"Enter n = ";
    cin>>n;
    cout<<"\n Fibonacci series (n)"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<s1.fibonacci(i);
    }
    return 0;
}