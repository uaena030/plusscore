#include <iostream>
#include <iomanip>

int main(){
    float a, b;
    while (std::cin >> a) {
        std::cin >> b;
        std::cout << std::fixed << std::setprecision(1) << (a * b) / 2.0 << std::endl;
    }
    return 0;
}