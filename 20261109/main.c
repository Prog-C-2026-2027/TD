#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(const int argc, const char *argv[])
{
    // printf("argc=%d\n", argc);

    // printf("argv[0] = [%s]\n", argv[0]);

    // if (argc >= 2)
    // {
    //     printf("argv[1] = [%s]\n", argv[1]);
    //     int n = 0;
    //     n = atoi(argv[1]);
    //     printf("n=%d\n", n);
    // }

    // set seed
    // srand(43);
    srand(time(NULL));

    printf("%d\n", RAND_MAX);
    printf("%6d\n", rand());
    printf("%6d\n", rand());
    printf("%6d\n", rand());
    printf("%6d\n", rand());
    printf("%6d\n", rand());

    return 0;
}
