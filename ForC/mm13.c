#include <stdio.h>

int main(){
    int ah;
    while(scanf("%d",&ah)!=EOF){
        int am;
        scanf("%d",&am);
        int bh, bm;
        scanf("%d %d", &bh, &bm);
        int total;
        if(bm >= bh){
            total = 60 * (bh - ah) + bm - am;
        }
        else{
            total = 60 + bm - am + 60 * (bh - 1 - ah);
        }
        //printf("%d\n", total);
        int fee;
        if(total/60 < 2){
            total /= 30;
            fee = total * 30;
        }
        else if(total/60 >= 2 && total/60 < 4){
            total /= 30;
            total -= 4;
            fee = total * 40 + 120;
        }
        else{
            total /= 30;
            total -= 8;
            fee = total * 60 + 280;
        }
        printf("%d\n", fee);
    }
    return 0;
}