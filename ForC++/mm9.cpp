#include <iostream>

int main() {
    int a;
    while (std::cin >> a) {
        if (a > 31) {
            std::cout << "Value of more than 31" << std::endl;
        } else {
            int sum = 1;
            for (int i = 0; i < a; ++i) {
                sum = sum * 2;
            }
            std::cout << sum << std::endl;
        }
    }
    return 0;
}