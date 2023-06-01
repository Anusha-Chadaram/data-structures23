//binary search using function
#include<stdio.h>
#include<conio.h>
void binary_search(int arr[],int len)
{
	int i,j,mid,first,search,last,temp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-1;j++)
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
    }
    printf("\nthe elements of after sorting\n");
    for(i=0;i<len;i++)
    printf("%d  ",arr[i]);
	first=0,last=len-1;
	printf("\nEnter the searching element: ");
	scanf("%d",&search);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]==search)
		{
			printf("The element is found in %d location",mid);
			break;
		}
			if(arr[mid]>search)
			first=mid-1;
			else
			last=mid+1;
	}
}
void main()
{
	int len,i;
	printf("Enter the length of the array: ");
	scanf("%d",&len);
	int arr[len];printf("enter the array elements:\n");
	for(i=0;i<len;i++)
	scanf("%d",&arr[i]);
	binary_search(arr,len);
}
