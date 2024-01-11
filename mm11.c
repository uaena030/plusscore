#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int first, second, last;
        first = a / 10;
        second = (a % 10) / 5;
        last = a - 10 * first - second * 5;
        printf("NT10=%d\nNT5=%d\nNT1=%d\n", first, second, last);
    }
}