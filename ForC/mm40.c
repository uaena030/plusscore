#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!= EOF){
        int temp[a], total = 0;
        for(int i = 1; i <= a; i++){
            temp[i - 1] = i;
            total += i;
        }
        for(int i = 0; i < a; i++){
            printf("%d ", temp[i]);
            if(i != a - 1){
                printf("+ ");
            }
            else{
                printf("= %d\n", total);
            }
        }
    }
    return 0;
}