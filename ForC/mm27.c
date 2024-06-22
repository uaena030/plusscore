#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        long long sum = 0;
        if(a > b){
            int temp;
            temp = b;
            b = a;
            a = temp;
        }
        for(int i = a; i <= b; i++){
            sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}