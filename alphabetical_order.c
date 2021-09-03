/**
    Write a program that will print all the numbers form 1 to 1000 in alphabetical order.

    Requirement:
        Each line will have a total of five numbers and each number will be separated by a tab character.
    Output like:
        1000    999     998     997     996
        995     994     993     992     991
        990     989     988     987     986
        ...     ...     ...     ...     ...

*/
#include<stdio.h>

int main()
{
    int count = 0;
    for(int i = 1000; i >= 1; i--)
    {
        count++;
        printf("%d\t",i);
        if(count % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
