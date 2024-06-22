#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i = a - 1; i > 1; i--){
            int check = 0;
            for(int j = 2; j < i; j++){
                if(i % j == 0){
                    check = 1;//not the num
                    break;
                }
            }
            if(check == 0){
                printf("%d\n", i);
                break;
            }
        }
    }
}