#include <stdio.h>

int main(){
    float a, b, c;
    while(scanf("%f",&a) != EOF){
        scanf("%f %f", &b, &c);
        printf("Trapezoid area:%.1f\n", (a + b)*c / 2.0);
    }
}