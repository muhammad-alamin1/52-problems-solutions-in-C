#include <stdio.h>

int main()
{
    int n, zero_count, i;
    long long int fact = 1, mod;

    printf("Enter positive integer number(0 to exit) : ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n <= 0)
            break;
        else
            fact *= i;
    }
    printf("Factorial : %lld\n", fact);

    while(fact > 0)
    {
        mod = fact%10;
        if(mod == 0) zero_count++;
        else break;
        fact /= 10;
    }
    printf("Zero Count : %d\n", zero_count);

}
