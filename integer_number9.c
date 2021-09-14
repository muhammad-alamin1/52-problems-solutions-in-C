/** A whole number is a number whose square root is a whole number

    Output like -

    intput      output
    16           YES
    18           NO
    196          YES

*/
#include<stdio.h>
#include<math.h>

int main()
{
    int kase, num;
    double sq_root;

    printf("Enter the number of terms: ");
    scanf("%d", &kase);

    for(int i = 1; i <= kase; i++)
    {
        printf("\nEnter Your number: ");
        scanf("%d", &num);
        sq_root = sqrt(num);

        if(sq_root * sq_root == num)
            printf("YES");
        else
            printf("NO");
    }

    return 0;
}
