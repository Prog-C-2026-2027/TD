#include <stdio.h>

#define DIMENSION 2.5 // symbole of preprocessor
#define SUM (1+2)

int main(void)
{
    // create a variable named people_count with initial value 18
    // display people_count = 18
    int people_count = 18;
    printf("people in the room : %d\n", people_count);

    // create a variable named stage type short, with no initial value
    // display stage value
    short stage;
    printf("stage = %d\n", stage);

    printf("%f\n", DIMENSION);
    printf("%d\n", SUM);
    printf("%d\n", 3*SUM);


    const double G=9.81;

    return 0;
}
