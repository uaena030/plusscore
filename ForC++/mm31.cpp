#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        long long sum = 0;
        
        for (int i = 1; i < a; ++i) {
            if ((i % 2 == 0 && i % 3 == 0) && i % 12 != 0) {
                sum += i;
            }
        }
        
        std::cout << sum << std::endl;
    }
    
    return 0;
}