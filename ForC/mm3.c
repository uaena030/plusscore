#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        int c;
        c = a + b;
        printf("%d\n", c);
    }
}