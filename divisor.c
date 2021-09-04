/** Problem: Find all the factors of a number (1 <= N <= 100000)

    Output: You have to point one line for each key, you have to give the case number
            at the beginning. Then all the factors of N have to be printed in small to
            large size and each factor has to be printed only once. The multipliers need
            to be separated by just one space and there will be no extra space at the end
            of the line.
    Output like:
            Input        Output
            3            Case 1: 1 2 3 6
            6            Case 2: 1 3 5 15
            ...          ................
*/
#include<stdio.h>

int main()
{
    int T, N, i, j;

    scanf("%d",&T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d",&N);
        printf("Case: %d:",i);

        for(j = 1; j <= N; j++)
        {
            if(N%j == 0)
            {
                printf(" %d", j);
            }
        }
        printf("\n");
    }

    return 0;
}
