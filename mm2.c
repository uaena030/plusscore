#include <stdio.h>

int main(){
    float a, b;
    while(scanf("%f",&a) != EOF){
        scanf("%f", &b);
        printf("%.1f\n", (a * b) / 2.0);
    }
    return 0;
}