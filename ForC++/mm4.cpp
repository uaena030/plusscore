#include <iostream>
using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;

    // 計算總和、乘積、差、商和餘數
    long long sum = a + b;
    long long product = a * b;
    long long difference = a - b;
    long long quotient;
    long long remainder;
    if(b == 0){
        quotient = 0;
        remainder = a;
    }
    else{
        quotient = a / b;
        remainder = a % b;
    }

    // 輸出結果
    cout << a << "+" << b << "=" << sum << endl;
    cout << a << "*" << b << "=" << product << endl;
    cout << a << "-" << b << "=" << difference << endl;
    cout << a << "/" << b << "=" << quotient << "..." << remainder << endl;

    return 0;
}
