#include<stdio.h>

int main()
{
    int T, temp, n1, n2;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++)
    {
        scanf("%d%d", &n1, &n2);
        if(n1 > n2)
        {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }
        printf("Case: %d: %d %d\n", i, n1, n2);
    }

    return 0;
}
