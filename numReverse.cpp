#include<iostream>
using namespace std;

int main() {
    int num, i = 1, reverse = 0;
    cin >> num;
    while (num > 0) {
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num /= 10;
    }
    cout << reverse; 
    return 0;
}