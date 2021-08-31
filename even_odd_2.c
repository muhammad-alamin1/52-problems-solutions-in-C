/**
    If an integer is given, you have to find out whether it is even or odd.
    The first line will contain a number T(1 <= T <=100). Next, non-negative
    n will be given in T-numbered lines. A number can have a maximum of 100 digits.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T, i, number;
    char n[101];

    scanf("%d",&T);

    for(i = 1; i <= T; i++)
    {
        scanf("%s",&n);
        number = atoi(n);

        if(number%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
