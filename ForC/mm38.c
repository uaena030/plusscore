#include <stdio.h>

int main(){
    int a, b, c;
    while(scanf("%d",&a)!=EOF){
        scanf("%d %d",&b,&c);
        if(a + b > c && a + c > b && b + c > a){
            printf("fit\n");
        }
        else
            printf("unfit\n");
    }
}