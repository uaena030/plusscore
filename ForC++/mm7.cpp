#include <iostream>

int main() {
    int a;
    while (std::cin >> a) {
        std::cout << a << " " << a * a << " " << a * a * a << std::endl;
    }
    return 0;
}