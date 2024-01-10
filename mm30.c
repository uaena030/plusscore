#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a) != EOF){
        int check = 0;
        for(int i = 2; i < a; i++){
            if(a%i == 0){
                printf("NO\n");
                check = 1;
                break;
            }
        }
        if(check == 0){
            printf("YES\n");
        }
    }
    return 0;
}