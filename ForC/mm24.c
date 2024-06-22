#include <stdio.h>
#include <math.h>

int main(){
    double a;
    int b;
    while(scanf("%lf",&a) != EOF){
        scanf("%d",&b);
        if(a <= 60){
            a = b * a;
        }
        else if(a > 60 && a <= 120){
            a = b * 60 + 1.33 * b * (a - 60);
        }
        else{
            a = b * 60 + b * 1.33 * 60 + b * 1.66 * (a - 120);
        }
        int temp;
        temp = (int)(a * 100 + 5) / 10;
        double n = (double)temp / 10.0;
        printf("%.1lf\n", n);
    }
    return 0;
}   