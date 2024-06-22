#include <iostream>

int main() {
    int a;
    
    while (std::cin >> a) {
        int temp[a], total = 0;
        
        // 建立陣列並計算總和
        for (int i = 1; i <= a; i++) {
            temp[i - 1] = i;
            total += i;
        }
        
        // 輸出數字與相應的符號
        for (int i = 0; i < a; i++) {
            std::cout << temp[i];
            if (i != a - 1) {
                std::cout << " + ";
            } else {
                std::cout << " = " << total << std::endl;
            }
        }
    }
    
    return 0;
}