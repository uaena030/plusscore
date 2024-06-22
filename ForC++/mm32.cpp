#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        int c, d, e;
        c = a / 100;
        d = (a / 10) % 10;
        e = a % 10;
        
        int sum = c*c*c + d*d*d + e*e*e;
        
        if (sum == a) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    
    return 0;
}