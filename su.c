#include <stdio.h>

int main()
{
    int n,i,sum;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d natural numbers =%d \n",n,sum);
}
    
