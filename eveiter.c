#include <stdio.h>

int main()
{
    int num,i;
    printf("Print all even numbers till:");
    scanf("%d",&num);
    printf("Even numbers from 1 to %d are: \n", num);
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
             printf("%d \n", i);
            
        }
       
    }
    
}
