/**
    If an integer is given, whether it is even or odd,
    it has to be found out.
*/
#include<stdio.h>

int main()
{
    int T, i, n;

    scanf("%d",&T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d",&n);

        if(n%2 == 0)
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
