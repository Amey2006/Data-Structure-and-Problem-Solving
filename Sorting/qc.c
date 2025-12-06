#include<stdio.h>
int partition(int arr[],int l,int r)
{
	int index=l-1;
	int pivot=arr[r];
	for(int j=l;j<r;j++)
	{
		if(arr[j]<pivot)
		{	
			index++;
			int temp=arr[j];
			arr[j]=arr[index];
			arr[index]=temp;
		}
	}
	index++;
	int temp=arr[r];
	arr[r]=arr[index];
	arr[index]=temp;

	return index;
}
void qc(int arr[],int l,int r)
{
	if(l<r)
	{
		int pivot=partition(arr,l,r);
		qc(arr,l,pivot-1);
		qc(arr,pivot+1,r);
	}
}
int main()
{
	int n=6;
	int arr[n]={6,3,2,1,0,5};
	printf("Before Sorting \n");
	for(int i=0;i<=5;i++)
	{
		printf(" %d ",arr[i]);
	}
	qc(arr,0,5);
	printf("\nAfter Sorting \n");
	for(int i=0;i<=5;i++)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}