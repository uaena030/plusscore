#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        for (int i = 1; i < a; ++i) {
            if (a % i == 0) {
                std::cout << i << " ";
            }
        }
        std::cout << a << std::endl;
    }
    
    return 0;
}