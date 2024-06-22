#include<stdio.h>

int main(){
    long long int a;
    while(scanf("%lld",&a)!=EOF){
        long long int sum = 1;
        for(int i = 0; i < a; i++){
            sum *= (i + 1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}