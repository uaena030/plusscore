#include <iostream>

int main() {
    int a, b;
    
    while (std::cin >> a >> b) {
        long long sum = 0;
        
        // Ensure a <= b
        if (a > b) {
            int temp = b;
            b = a;
            a = temp;
        }
        
        for (int i = a; i <= b; ++i) {
            sum += i;
        }
        
        std::cout << sum << std::endl;
    }
    
    return 0;
}