#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a) != EOF){
        if(a > 31)  printf("Value of more than 31\n");
        else{
            int sum = 1;
            for(int i = 0; i < a; i++){
                sum = sum * 2;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}