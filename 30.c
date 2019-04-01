 #include<stdio.h>
	void main()
	{
	int hr,min,hr1,m1,h2,m2;
	printf("enter 2 times in hour and minute format");
	scanf("%d%d",&hr1,&m1);
	scanf("%d%d",&hr2,&m2);
	hr=h2-hr1;
	min=m2-m1;
	printf("%d\t%d",hr,min);
	}
