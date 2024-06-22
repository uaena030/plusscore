#include <iostream>

int main() {
    int a, b;
    while (std::cin >> a) {
        std::cin >> b;
        int c = a + b;
        std::cout << c << std::endl;
    }
    return 0;
}