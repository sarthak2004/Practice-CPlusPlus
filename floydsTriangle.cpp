#include<iostream>
using namespace std;

int main() {
    int num, counter = 1;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << counter++ << " ";
        }
        cout << endl;
    }
    return 0;
}
