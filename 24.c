#include <stdio.h>
int main()
{
int i,temp,b,a[20],c;
printf("enter the array of numbers");
scanf("%d",&i);
printf("enter the numbers");
for(b=0;b<i;b++);
{
scanf("%d",&a[b]);
}
for(b=0;b<i;b++)
{
for(c=b+1;c<=i;c++)
{
if(a[b]>a[c]) 
{
temp=a[b];
a[b]=a[c];
a[c]=temp;
}
}
}
for(b=0;b<i;b++)
{
    printf("%d",a[b]):
}
}
}
