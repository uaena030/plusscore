#include <stdio.h>

int main(){
    int x, y;
    while(scanf("%d",&x)!=EOF){
        scanf("%d",&y);
        if(x <= 100 && y <= 100 && x >= 0 && y >= 0){
            printf("inside\n");
        }
        else
            printf("outside\n");
    }
}