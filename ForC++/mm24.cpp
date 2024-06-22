#include <iostream>
#include <iomanip> // For std::setprecision
#include <cmath>

int main() {
    double a;
    int b;
    
    while (std::cin >> a >> b) {
        if (a <= 60) {
            a = b * a;
        } else if (a > 60 && a <= 120) {
            a = b * 60 + 1.33 * b * (a - 60);
        } else {
            a = b * 60 + b * 1.33 * 60 + b * 1.66 * (a - 120);
        }
        
        // Round to one decimal place
        a = round(a * 10.0) / 10.0;
        
        // Print with one decimal place
        std::cout << std::fixed << std::setprecision(1) << a << std::endl;
    }
    
    return 0;
}