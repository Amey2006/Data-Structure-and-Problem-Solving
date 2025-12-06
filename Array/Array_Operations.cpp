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
void insert(int arr[],int n,int pos,int data)
{
    for(int i=n;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=data;
}
void Delete(int arr[],int &n,int pos)
{
    for(int i=pos;i<n-1;i++)
    {
          arr[i]=arr[i+1];
    }
    n--;
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
    //Display(arr,n);
   // insert(arr,n,0,3132);
    Display(arr,n);
    Delete(arr,n,1);
    Display(arr,n);
    return 0;
}