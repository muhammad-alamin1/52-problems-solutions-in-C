// Three separate number will be given. They have to be printed in small to large size
#include<stdio.h>

int main()
{
    int T, n1, n2, n3, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &T);

    for(int i = 1; i < T; i++)
    {
        printf("\nEnter three numbers: ");
        scanf("%d %d %d", &n1, &n2, &n3);

        if(n1 > n2)
        {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        if(n1 > n3)
        {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
        if(n2 > n3)
        {
            temp = n2;
            n2 = n3;
            n3 = temp;
        }
        printf("\nCase %d: %d %d %d", i, n1, n2, n3);
    }

    return 0;
}
