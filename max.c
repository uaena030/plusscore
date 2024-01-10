#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d", &a) != EOF){
        scanf("%d", &b);
        int min;
        if(a>b) min = b;
        else 
            min = a;
            int temp;
        for(int i = 1; i <= min; i++){
            if(a % i == 0 && b % i == 0){
                temp = i;
            }
        }
        printf("%d\n", temp);
    }
}