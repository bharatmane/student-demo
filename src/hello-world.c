#include <stdio.h>

// main function -
// where the execution of program begins
int main()
{
    // prints hello world

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
