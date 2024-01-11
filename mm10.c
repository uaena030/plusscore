#include <stdio.h>

int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    {
        a = a * 9 / 5 + 32;
        int temp;
        temp = (int)(a * 100 + 5) / 10;
        double n = (double)temp / 10.0;
        printf("%.1lf\n", n);
    }
    return 0;
}