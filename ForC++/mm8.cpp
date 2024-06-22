#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a) {
        std::cin >> b;
        std::cout << (a + b) * (a + b) << std::endl;
    }
    return 0;
}