#include<stdio.h>
	void main()
	{
	int m,hr;
	printf("enter the minute");
	scanf("%d",&m);
	hr=m/60;
	m=m%60;
	printf("%d\t%d",hr,m);
	}
