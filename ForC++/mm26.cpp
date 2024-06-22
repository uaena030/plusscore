#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        for (int i = 1; i <= a; ++i) {
            std::cout << i << "*" << i << "=" << i*i << std::endl;
        }
    }
    
    return 0;
}