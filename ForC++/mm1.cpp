#include <iostream>
#include <iomanip>

int main() {
    float a, b, c;
    while (std::cin >> a) {
        std::cin >> b >> c;
        std::cout << std::fixed << std::setprecision(1) 
                  << "Trapezoid area:" << (a + b) * c / 2.0 << std::endl;
    }
    return 0;
}