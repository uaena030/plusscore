#include <iostream>

int main() {
    int a, b, c;
    
    while (std::cin >> a) {
        std::cin >> b >> c;
        
        if (a + b > c && a + c > b && b + c > a) {
            std::cout << "fit" << std::endl;
        } else {
            std::cout << "unfit" << std::endl;
        }
    }
    
    return 0;
}