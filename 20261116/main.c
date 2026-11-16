#include <stdio.h>
#include <math.h>

// a  : type double
// pc : type double* = address of a variable of type double
// ps : type double* = address of a variable of type double
void trig(const double angle, double *pc, double *ps)
{
    printf("pc = %p\n", pc);
    printf("ps = %p\n", ps);

    printf("at pc, value is %+10.3lf\n", *pc);
    printf("at ps, value is %+10.3lf\n", *ps);

    *ps = sin(angle);
    *pc = cos(angle);

    printf("after update, at pc, value is %+10.3lf\n", *pc);
    printf("after update, at ps, value is %+10.3lf\n", *ps);
}

int main(void)
{
    double a = M_PI/6.;
    double c = 1.;
    double s = 2.;

    printf("address of c = %p\n", &c);
    printf("address of s = %p\n", &s);

    // &c : address of variable c (c type is double)
    // &s : address of variable s (s type is double)
    trig(a, &c, &s);

    printf("c=%+10.3lf\n", c);
    printf("s=%+10.3lf\n", s);
    return 0;
}
