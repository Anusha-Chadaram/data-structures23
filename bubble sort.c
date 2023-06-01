//bubble sort
#include<stdio.h>
main()
{
	int i,temp,j,n,a[100];
	void bubble(int [],int,int);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble(a,temp,n);
}
void bubble(int a[],int temp,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	printf("%d\t",a[j]);
	
}
