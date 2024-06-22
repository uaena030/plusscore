#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        bool isPrime = true;
        
        for (int i = 2; i < a; ++i) {
            if (a % i == 0) {
                std::cout << "NO" << std::endl;
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            std::cout << "YES" << std::endl;
        }
    }
    
    return 0;
}