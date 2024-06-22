#include <iostream>

int main() {
    long long int a;
    
    while (std::cin >> a) {
        long long int sum = 1;
        
        for (int i = 0; i < a; ++i) {
            sum *= (i + 1);
        }
        
        std::cout << sum << std::endl;
    }
    
    return 0;
}