#include <iostream>

int main() {
    int a;
    while (std::cin >> a) {
        int first, second, last;
        first = a / 10;
        second = (a % 10) / 5;
        last = a - 10 * first - 5 * second;
        std::cout << "NT10=" << first << std::endl;
        std::cout << "NT5=" << second << std::endl;
        std::cout << "NT1=" << last << std::endl;
    }
    return 0;
}