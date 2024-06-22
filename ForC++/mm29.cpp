#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        for (int i = a - 1; i > 1; --i) {
            bool isPrime = true;
            for (int j = 2; j < i; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                std::cout << i << std::endl;
                break;
            }
        }
    }
    
    return 0;
}