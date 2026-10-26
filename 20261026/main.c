#include <stdio.h>

#define SIZE 9

int main(void)
{
    //     for(int row=0 ; row<SIZE; row++) {

    //         for(int col=0 ; col<SIZE; col++) {
    //             printf("*");
    //         }

    //         puts("");

    //     }

    // for (int row = 0; row < SIZE; row++)
    // {

    //     for (int col = 0; col < SIZE - row - 1; col++)
    //     {
    //         printf(" ");
    //     }

    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         printf("*");
    //     }

    //     puts("");
    // }

    for (int row = 0; row < SIZE; row++)
    {

        for (int col = 0; col < SIZE; col++)
        {
            // if(col<SIZE-row-1) {
            //     printf(".");
            // }
            // else {
            //     printf("*");
            // }

            // à faire : une seul printf avec un opérateur ternaire :)
        }

        puts("");
    }

    return 0;
}
