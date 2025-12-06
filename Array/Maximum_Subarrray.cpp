#include<iostream>
using namespace std;
int max_subarray(int arr[],int n) // Kadanes Algorithm 
{
    int curr_sum=0;
    int max_sum=INT64_MIN;//INT64_MIN used because 0 not useful when all no. in array negative
    for (int i=0;i<n;i++)
    {
        curr_sum=curr_sum+arr[i];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0)
        curr_sum=0;     
    }
   return max_sum;
}
int main()
{
    int arr[10]={1,0,5,-2,-5,-7,2,9,6,-1};
    int sumarray=max_subarray(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<sumarray<<endl;
    cout<<INT16_MIN<<endl;
    cout<<INT32_MIN<<endl;
    cout<<INT64_MIN<<endl;
    cout<<INT16_MAX<<endl;
    cout<<INT32_MAX<<endl;
    cout<<INT64_MAX<<endl;
    return 0;
}