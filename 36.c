#include <stdio.h>
#include <string.h>
 
void main()
{
    char S[200];
    int count = 0, J;
 
    printf("enter the string\n");
    scanf("%[^\n]s", S);
    for (J = 0;S[J] != '\0';J++)
    {
        if (S[J] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
