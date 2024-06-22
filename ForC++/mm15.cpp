#include <iostream>

int main() {
    int x, y;
    
    while (std::cin >> x >> y) {
        if (x <= 100 && y <= 100 && x >= 0 && y >= 0) {
            std::cout << "inside" << std::endl;
        } else {
            std::cout << "outside" << std::endl;
        }
    }
    
    return 0;
}