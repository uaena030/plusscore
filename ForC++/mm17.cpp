#include <iostream>

int main() {
    int a, b;
    
    while (std::cin >> a >> b) {
        int min = (a < b) ? a : b;
        int temp = 1;
        
        for (int i = 1; i <= min; ++i) {
            if (a % i == 0 && b % i == 0) {
                temp = i;
            }
        }
        
        std::cout << temp << std::endl;
    }
    
    return 0;
}