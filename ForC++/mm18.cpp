#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        int reverse = 0;
        
        if (a < 0) {
            a = -a;
            reverse = 1;
        }
        
        int temp = a;
        int count = 0;
        int cc[8];
        
        while (temp != 1) {
            int wtemp = temp % 2;
            temp /= 2;
            cc[count] = wtemp;
            count++;
        }
        
        cc[count] = temp % 2;
        
        if (reverse == 0) {
            for (int i = 0; i < 7 - count; i++) {
                std::cout << "0";
            }
            
            for (int i = count; i >= 0; i--) {
                std::cout << cc[i];
            }
        } else {
            for (int i = 0; i < 7 - count; i++) {
                std::cout << "1";
            }
            
            for (int i = count; i >= 0; i--) {
                if (cc[i] == 1)
                    cc[i] == 0;
                else
                    cc[i] == 1;
                std::cout << cc[i];
            }
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}