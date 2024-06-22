#include <iostream>
#include <iomanip> // For std::setprecision
#include <cmath>

int main() {
    double x;
    
    while (std::cin >> x) {
        double discounted_price;
        
        if (x <= 800) {
            discounted_price = x * 0.9;
        } else if (x > 800 && x < 1500) {
            discounted_price = x * 0.9 * 0.9;
        } else {
            discounted_price = x * 0.9 * 0.79;
        }
        
        // Round to one decimal place
        discounted_price = round(discounted_price * 10.0) / 10.0;
        
        // Print with one decimal place
        std::cout << std::fixed << std::setprecision(1) << discounted_price << std::endl;
    }
    
    return 0;
}