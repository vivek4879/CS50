#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("pyramid height between 1 and 8: ");
    }
    while (n < 1 || n > 8);

    //for each row
    for (int i = 0; i < n; i++)
    {
        //for each column space

        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }

        //for each column #

        for (int k = n - i; k <= n; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
