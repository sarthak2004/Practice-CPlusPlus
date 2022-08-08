#include<iostream>
using namespace std;

int main() {
    int num, counter = 1;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int a = num; a >= i; a--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}