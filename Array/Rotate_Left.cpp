#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Initial array\n\n";
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<arr[i];
    }
    int k;
    cout<<"\n Enter k ->  ";
    cin>>k;
    int rotated=0;
    while(rotated!=k)
    {
        int store_last=arr[0];
        int i=0;

        while(i<n-1)
        {
            arr[i]=arr[i+1];
            i++;
        }
        arr[i]=store_last;
        rotated++;
    }
    cout<<"Roatated array\n\n";
    for(int i=0;i<n;i++)
    {
        cout<<"  "<<arr[i];
    }
}