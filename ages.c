//ages
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,age;
	int cntb=0,cnts=0,cnta=0;
	while(n<20)
	{
		scanf("%d",&age);
		if(age>=0&&age<=5)
		cntb++;
		else if(age>=5&&age<=17)
		cnts++;
		else
		cnta++;
		n++;
	}
		printf(" baby age : %d\n",cntb);
		printf(" schooling age : %d\n",cnts);
		printf(" adult age : %d\n",cnta);
	
}
