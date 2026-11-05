#include <stdio.h>
#include <math.h>

double xy2rho(const double x, const double y)
{
    return sqrt(x*x+y*y);
}

double xy2theta(const double x, const double y)
{
    return atan2(y,x);
}
double rad2deg(const double alpha)
{
    return alpha * 180. / M_PI;
}

int main(void)
{
    double x = 0.;
    double y = 0.;

    puts("Coordonnées cartésiennes -> polaires");
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);

    printf("ρ = %+.3lf\n", xy2rho(x, y));
    printf("𝚯 = %+.3lfrd\n", xy2theta(x, y));
    printf("𝚯 = %+.3lf°\n", rad2deg(xy2theta(x, y)));

    return 0;
}
