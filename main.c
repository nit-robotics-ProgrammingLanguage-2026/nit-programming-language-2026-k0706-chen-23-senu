
#include <stdio.h>
#include <math.h>

double rad_to_deg(double rad)
{
    return rad * 180.0 / M_PI;
}

int main(void)
{
    double x;
    double rad;
    double deg;

    scanf("%lf", &x);

    if (x < 0)
    {
        printf("NG");
        return 0;
    }

    rad = atan(x);
    deg = rad_to_deg(rad);

    printf("%.2f", deg);

    return 0;
}
