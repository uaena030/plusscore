#include <stdio.h>

int main(){
    int x, y;
    while(scanf("%d",&x)!=EOF){
        scanf("%d",&y);
        if(x * x + y * y <= 10000){
            printf("inside\n");
        }
        else
            printf("outside\n");
    }
}