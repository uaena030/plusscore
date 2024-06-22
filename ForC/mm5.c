#include <stdio.h>
#include <math.h>

int main(){
    double a;
    while(scanf("%lf",&a) != EOF){
        a = a * a;
        int temp;
        temp = (int)(a * 100 + 5) / 10;
        double n = (double)temp / 10.0;
        printf("%.1lf\n", n);
    }
    return 0;
}