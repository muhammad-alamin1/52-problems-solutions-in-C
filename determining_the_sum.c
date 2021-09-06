// Write a program to find the sum of the first and last digits of a 5 digit number.
#include<stdio.h>

int main()
{
    int N, T, sum = 0, first_digit, last_digit;

    printf("How many times do you want to see the sum of the numbers: ");
    scanf("%d",&T);

    for(int i = 1; i <= T; i++)
    {
        printf("Enter any number to find sum of first and last digit: ");
        scanf("%d", &N);

        last_digit = N % 10;
        first_digit = N;

        //  Find the first digit by dividing N by 10 until first digit is left
        while(N >= 10)
        {
            N /= 10;
        }
        first_digit = N;
        sum = first_digit + last_digit;

        printf("Sum of first & last digit: %d\n", sum);
    }

    return 0;
}
