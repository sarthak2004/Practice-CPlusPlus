#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int num, i; 
    double check = 0;
    cin >> num;
    i = num;
    while (num > 0) {
        int lastDigit = num % 10;
        check += pow(lastDigit, 3);
        num /= 10;
    }
    if (check == i) {
        cout << "armstrong number";
    }
    else {
        cout << "not armstrong";
    }
    return 0;
}