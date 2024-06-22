#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        int sum = 0;
        
        for (int i = 0; i <= a; ++i) {
            if (i % 3 == 0) {
                sum += i;
            }
        }
        
        std::cout << sum << std::endl;
    }
    
    return 0;
}