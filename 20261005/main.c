#include <stdio.h>
#include <math.h>

#define TOLERANCE 1E-8

int main(void)
{
    fprintf(stdout, "%.20lf\n", 0.1);
    fprintf(stdout, "%.20lf\n", 0.2);
    fprintf(stdout, "%.20lf\n", 0.3);
    fprintf(stdout, "%.20lf\n", 0.1 + 0.2);

    fprintf(stdout, "%d\n", 0.3 == (0.1 + 0.2));
    fprintf(stdout, "%d\n", fabs(0.3 - (0.1 + 0.2)) < TOLERANCE);

    return 0;
}
