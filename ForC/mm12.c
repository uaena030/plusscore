#include <stdio.h>

int main(){
    float a;
    while(scanf("%f",&a)!=EOF){
        a /= 0.238;
        printf("%d\n",((int)a )+ 1);
    }
    return 0;
}