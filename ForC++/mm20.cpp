#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int decNumber;
    while (cin >> decNumber) {
        // 使用 stringstream 將整數轉換為十六進位表示
        stringstream ss;
        ss << hex << decNumber; // 使用 hex manipulator 將數字轉換為十六進位表示
        string hexNumber = ss.str(); // 將 stringstream 中的字串取出

        // 輸出十六進位數字
        cout << hexNumber << endl;
    }

    return 0;
}