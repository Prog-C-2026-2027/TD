#include <stdio.h>

int main(void)
{
    // int value = 0;
    // const int SENTINELLE = -1;
    // int sum = 0;
    // int count = 0;
    // double mean = 0.;

    // while (scanf("%d", &value) == 1 && value != SENTINELLE)
    // {
    //     sum += value;
    //     count++;
    // }

    // if (count > 0)
    // {
    //     mean = (double)sum / count;
    //     printf("mean=%.2lf\n", mean);
    // }

    // for(int count=0; count<=10; count +=2) {
    //     printf("%3d\n", count);
    // }

    // saisir un nombre entier non signé
    // comptez et affichez le nombre de bits à 1 dans ce nombre

    unsigned int n = 0b10000011;
    int count = 0;

    while (n != 0)
    {

        count += n % 2;

        // if ((n % 2) == 1)
        // { // if( (n&1) !=0 ) { ... }
        //     count++;
        // }

        n = n >> 1; // n >>= 1; // n = n/2; // n /= 2;
    }

    printf("count=%d\n", count);
    return 0;
}
