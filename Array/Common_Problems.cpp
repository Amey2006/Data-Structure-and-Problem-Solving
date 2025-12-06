#include<iostream>
using namespace std;
int n;
void Display(int arr[],int n)
{
    cout<<"\n Array elements : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void Reverse(int arr[],int n)
{
    int l=0,r=n-1;
    {
        while(l<r)
        {
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }
}
void MinMax(int arr[],int n)
{
    int min=arr[0],max=arr[0];
    for(int i=1;i<n-1;i++)
    {
    if(arr[i]>max) max=arr[i];
    if(arr[i]<min) min=arr[i];
    }
    cout<<"\n Max = "<<max;
    cout<<"\n Min = "<<min;
}
int main()
{
    n=10;
   int arr[10]={12,0,99,45,1,0,33,56,89,15};
    Display(arr,n);
   // Reverse(arr,n);
    MinMax(arr,n);
   // Display(arr,n);
    return 0;
}