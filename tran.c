#include <stdio.h>

int main(){
    int a;
    while(scanf("%d",&a) != EOF){
        int reverse = 0;
        if(a < 0){
            a = -a;
            reverse = 1;
        }
        int temp = a, count = 0, cc[8];
        while(temp != 1){
            int wtemp;
            wtemp = temp % 2;
            temp /= 2;
            cc[count] = wtemp;
            count++;
        }
        cc[count] = temp % 2;
        if(reverse == 0){
            for(int i = 0; i < 7 - count; i++){
                printf("0");
            }
            for(int i = count; i >= 0; i--){
                printf("%d", cc[i]);
            }
        }
        else{
            for(int i = 0; i < 7 - count; i++){
                printf("1");
            }
            for(int i = count; i >= 0; i--){
                if(cc[i] == 1)  cc[i] == 0;
                else 
                    cc[i] == 1;
                printf("%d", cc[i]);
            }
        }
        printf("\n");
    }
}