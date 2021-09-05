/** Draw N*N square for each N
    Output like -

    Input       Output
    2           **
                **

    5           *****
                *****
                *****
                *****
                *****
*/
#include<stdio.h>

int main()
{
    int N;

    while(1)
    {
        scanf("%d",&N);
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

