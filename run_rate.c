/**
    Output like-

    input               output
    300 294 6           6.00 7.00
    200 100 100         3.00 6.06
    .............................
*/
#include<stdio.h>

int main()
{
    int T, r1, r2, B, ball_played;
    double current_rr, asking_rr;

    printf("Enter the number of terms: ");
    scanf("%d", &T);

    while(T--)
    {
        printf("\n\n\nEnter the opponent's run: ");
        scanf("%d", &r1);
        printf("\nEnter our run: ");
        scanf("%d", &r2);
        printf("\nEnter the ball number is left in the innings: ");
        scanf("%d", &B);

        ball_played = 300 - B; // 50 overs = 300 balls, 1 over = 6 ball
        current_rr = (r2 * 1.0 / ball_played) * 6;
        asking_rr = ((r1 - r2 + 1) * 1.0 / B) * 6;

        printf("\n\nCurrent Run Rate: %0.2lf\nRequired Run Rate: %0.2lf", current_rr, asking_rr);

    }

    return 0;
}

