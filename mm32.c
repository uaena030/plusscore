#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int c, d, e;
        c = a / 100;
        d = a / 10 - (c * 10);
        e = a % 10;
        int sum = c*c*c+d*d*d+e*e*e;
        if(sum == a){
            printf("Yes\n");
        } 
        else{
            printf("No\n");
        }
    }
}