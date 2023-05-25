//string reverse
#include<stdio.h>
main()
{
	char str[100],rev;
	int i=0,j=0;
	printf("enter the string:");
	gets(str);
	j=strlen(str)-1;
	while(i<j)
	{
		rev=str[j];
		str[j]=str[i];
		str[i]=rev;
		i++;
		j--;
		
	}
	printf("the reverse string\n");
	puts(str);
}
