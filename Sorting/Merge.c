#include<stdio.h>
//void mergesort(int arr[],int l,int r);
void merge(int arr[],int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1];
    int R[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=arr[mid+1+i];
    }
    printf("\n MERGING");
    for(int i=0;i<n1;i++)
    {
        printf(" %d",L[i]);
    }
    printf("   and   ");
    for(int i=0;i<n2;i++)
    {
        printf(" %d",R[i]);
    }
    printf("\n\n");
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            arr[k]=L[i];
            k++;
            i++;
        }
        else 
        {
            arr[k]=R[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        arr[k]=L[i];
        i++;k++;
    }
     while(j<n2)
    {
        arr[k]=R[j];
        j++;k++;
    }


}
void mergesort(int arr[],int l,int r)
{
    if(l<r) 
    {
    int mid=(l+r)/2;
    printf("\n DIVIDED  ");
    for(int i=0;i<=mid;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("   AND   ");
    for(int i=mid+1;i<=r;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n\n");
    mergesort(arr,l,mid);
 
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}
int main()
{
    int arr[10]={12,4,3,22,65,9,0,54,28,10};
     printf("Before sort\n");
    for(int i=0;i<10;i++)
    {
        printf(" %d ",arr[i]);
    }
    mergesort(arr,0,9);
   
    printf("\n\n\n\n After sort\n");
    for(int i=0;i<10;i++)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}