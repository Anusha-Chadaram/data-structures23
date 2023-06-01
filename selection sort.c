//selection sort
#include<stdio.h>
main()
{
	int i,temp,a[100],n,j;
	void sort(int [],int,int);
	printf("enter the size : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,temp,n);
}
void sort(int a[],int temp,int n)
{
int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
	if(a[i]<a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
