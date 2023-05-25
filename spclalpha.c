#include<stdio.h>
#include<conio.h>
main()
{
	char a[200];
	int spcl=0,alpha=0,i=0;
	printf("enter the string: ");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
		alpha++;
		else
		spcl++;
		i++;
	}
	printf("\n alphabets:%d",alpha);
	printf("\n special symbols : %d",spcl);
}
