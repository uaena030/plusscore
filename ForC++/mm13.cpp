#include <iostream>

int main() {
    int ah, am, bh, bm;
    
    while (std::cin >> ah >> am >> bh >> bm) {
        int total;
        if (bm >= bh) {
            total = 60 * (bh - ah) + (bm - am);
        } else {
            total = 60 * (bh - 1 - ah) + (60 - am + bm);
        }

        int fee;
        if (total / 60 < 2) {
            total /= 30;
            fee = total * 30;
        } else if (total / 60 >= 2 && total / 60 < 4) {
            total /= 30;
            total -= 4;
            fee = total * 40 + 120;
        } else {
            total /= 30;
            total -= 8;
            fee = total * 60 + 280;
        }

        std::cout << fee << std::endl;
    }
    
    return 0;
}