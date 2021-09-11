/** There will be many numbers in a line. The numbers will have one
    or more space characters. Find out the total number of numbers in the line.

    input like - char line[] = "1 -2 289493 -42 34 452";
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char line[] = "1 -2 289493 -42 34 452 4 5";
    char *p, *e;
    long int input;
    int count = 0;
    p = line;

    for(p = line; ; p = e)
    {
        input = strtol(p, &e, 10);
        if(p == e)
            break;
        count++;
    }
    printf("The number (unsigned integer) is: %d\n", count);

    return 0;
}
