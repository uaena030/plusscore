#include <stdio.h>

int main(){
    double x;
    while(scanf("%lf",&x)!=EOF){
        if(x <= 800){
            x = x * 0.9;
            int temp;
            temp = (int)(x * 100 + 5) / 10;
            double n = (double)temp / 10.0;
            printf("%.1lf\n", x);
        }
        else if(x > 800 && x < 1500){
            x = x * 0.9 * 0.9;
            int temp;
            temp = (int)(x * 100 + 5) / 10;
            double n = (double)temp / 10.0;
            printf("%.1lf\n", x);
        }
        else{
            x = x * 0.9 * 0.79;
            int temp;
            temp = (int)(x * 100 + 5) / 10;
            double n = (double)temp / 10.0;
            printf("%.1lf\n", x);
        }
    }
}