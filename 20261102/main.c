#include <stdio.h>
#include <math.h>

double compute_delta(const double a, const double b, const double c)
{
    double d = b * b - 4. * a * c;
    return d;
}

int main(void)
{
    double pa = 1.2;
    double pb = -4.0;
    double pc = 1.;
    double delta = 0.;

    delta = compute_delta(pa, pb, pc);
    printf("∆ = %lf\n", delta);

    if (delta > 0)
    {
        double x1 = (-pb + sqrt(delta)) / (2. * pa);
        double x2 = (-pb - sqrt(delta)) / (2. * pa);
        printf("x1 = %+10.3lf  x2 = %+10.3lf\n", x1, x2);
    }
    else if (delta == 0)
    {
        double x = -pb / (2. * pa);
        printf("x1 = x2 = %+10.3lf\n", x);
    }
    else
    { // ∆<0 by default
    }

    return 0;
}
