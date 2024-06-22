#include <iostream>

int main() {
    float a;
    while (std::cin >> a) {
        a /= 0.238;
        std::cout << static_cast<int>(a) + 1 << std::endl;
    }
    return 0;
}