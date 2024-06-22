#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a;
    while (std::cin >> a) {
        a = a * 1.6;
        int temp = static_cast<int>(a * 100 + 5) / 10;
        double n = static_cast<double>(temp) / 10.0;
        std::cout << std::fixed << std::setprecision(1) << n << std::endl;
    }
    return 0;
}