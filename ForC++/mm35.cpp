#include <iostream>

int main() {
    int year;
    
    while (std::cin >> year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)
                    std::cout << "Bissextile Year" << std::endl;
                else
                    std::cout << "Common Year" << std::endl;
            } else {
                std::cout << "Bissextile Year" << std::endl;
            }
        } else {
            std::cout << "Common Year" << std::endl;
        }
    }
    
    return 0;
}