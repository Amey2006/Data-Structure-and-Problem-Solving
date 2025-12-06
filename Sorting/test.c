#include<stdio.h>
void merge(int arr[],int left,int mid,int right)
{
	int n1=mid-left+1;
	int n2=right-mid;
	
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=arr[left+i];
	}
	for(int i=0;i<n2;i++)
	{
		R[i]=arr[mid+1+i];
	}
	int i=0,j=0,k=left;
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
    printf("\n\n");	`
	while(i<n1 && j<n2)
	{
		if(L[i]<R[j]) arr[k++]=L[i++];
		else
		arr[k++]=R[j++];

	}	
	while(i<n1)
	arr[k++]=L[i++];
	while(j<n2)
	arr[k++]=R[j++];



}
void mergesort(int arr[],int left,int right)
{
	if(left<right)
	{
		int mid=(left+right)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
int main()
{
	int arr[5]={99,12,4,6,0};
	printf("Before Sorting \n");
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
	mergesort(arr,0,4);
	printf("\nAfter Sorting \n");
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}

	return 0;
}