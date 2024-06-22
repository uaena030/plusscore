#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int day = a / 86400;
        int hour = (a - (day * 86400)) / 3600;
        int min = (a - (day * 86400) - (hour * 3600)) / 60;
        int sec = (a - (day * 86400) - (hour * 3600) - min * 60);
        printf("%d days\n%d hours\n%d minutes\n%d seconds\n", day, hour, min, sec);
    }
}