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
int Linear_Search(int arr[],int n,int key)
{
      for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; 
    }
    return -1;
}
int Binary_Search(int arr[],int n,int data)
{
    int start=0,end=n-1,mid;
    while(start<=end)
    {
        mid=((end-start)+end)/2;
        if(arr[mid]==data)
        {
            return mid;
        }
        else if(arr[mid]>data)
        {
            start=mid;
        }
        else end=mid-1;
    }
    return -1;
}
int main()
{
    
    cout<<"\n Enter no of elements :";
    cin>>n;
    int arr[n];
    cout<<"\n Enter array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Display(arr,n);
    cout<<"Found at position : "<<Binary_Search(arr,n,77);
    Display(arr,n);

    return 0;
}