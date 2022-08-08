#include<iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cout << i << " ";
        if (i % 2 == 0) {
        cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }

    while (num > 0) {
        cout << num << " ";
        num--;
    }
    cout << endl;
    num = 12;
    do {
        cout << num << " ";
        num--;
    } while (num > 0);
    return 0;
}