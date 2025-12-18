// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a=2;
    int b=10;
    int ans=0;
    for(int i=2;i<11;i++)
    {
        if(i%2 ==0 || i%5==0){
        ans=ans | (1<<(i-a));
        cout<<"ANS - >  "<<ans<<endl;
        }
    }
    for(int i=2;i<11;i++)
    {
        if((ans & (1<<(i-a)))!=0)
        {
            cout<<i<<" th bit is set"<<endl;

        }
          
       
    }
    return 0;
}