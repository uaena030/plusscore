#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        int day = a / 86400;
        int hour = (a % 86400) / 3600;
        int min = (a % 3600) / 60;
        int sec = a % 60;

        std::cout << day << " days" << std::endl;
        std::cout << hour << " hours" << std::endl;
        std::cout << min << " minutes" << std::endl;
        std::cout << sec << " seconds" << std::endl;
    }
    
    return 0;
}