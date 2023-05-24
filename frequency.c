#include<stdio.h>
main()
{
	int a[100],fr[100],i,j,n,count=1;
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	fr[i]=-1;
	for(i=0;i<n;i++)
	{
	count=1;
	for(j=i+1;j<n;j++)
	if(a[i]==a[j])
	{
		count++;
		fr[j]=0;
	}
	}
	if(fr[i]!=0)
	fr[i]=count;
	for(i=0;i<n;i++)
	{
	if(fr[i]!=0)
		printf(" the count of %d is %d\n",a[i],count);
}
}
