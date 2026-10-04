#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x = 16.55e-3;   // 0.01655
    double y = -2.75;
    double z = 0.15;

    double b = (sqrt(10 * (cbrt(x) + pow(x, y + 2))) *
        (pow(asin(z), 2) - fabs(x - y)));

    printf("Расчет по формуле:\n");
    printf("x = %.5f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);
    printf("---------------------\n");
    printf("Ответ: b = %.6f\n", b);

    return 0;
}