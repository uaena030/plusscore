#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        long long sum = 0;
        for(int i = 1; i < a; i++){
            if((i % 2 == 0 && i % 3 == 0) && i % 12 != 0){
                sum += i;
            }
        }
        printf("%d\n",sum);
    }
}