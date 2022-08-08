#include<iostream>
using namespace std;

int main() {
    int num1, num2, flag = 0;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++) {
        // flag = 0;
        int a;
        for (a = 2; a < i/2; a++) {
            if (i % a == 0) {
                // flag = 1;
                break;
            }
        }
        if (a == i/2) {           // flag can be compared
            cout << i << endl;
        }
    }
    return 0;
}