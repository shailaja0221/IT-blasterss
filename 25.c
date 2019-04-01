#include<stdio.h>
void main()
{
int b[10],c,d,temp,m;
printf("enter the number");
scanf("%d",&m);
printf("enter the number");
for(c=0;c<m;c++)
{
scanf("%d",&b[c]);
}
for(c=0;c<m;c++)
{
for(d=c+1;d<m;d++)
{
if(b[c]>b[d])
{
temp=b[c];
b[c]=b[d];
b[d]=temp;
}
}
}
for(c=0;c<m;c++)
{
printf("%d",b[c]);
}
}
