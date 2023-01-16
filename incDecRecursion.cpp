#include<iostream>
using namespace std;

int inc(int a) {
    if (a == 1) {
        cout << 1 << " ";
        return 2;
    }
    int temp = inc(a-1);
    cout << temp << " ";
    return a+1;
}

int dec(int a) {
    cout << a << " ";
    return (a == 1) ? 1 : dec(a-1);
}

int main() {
    int a;
    cin >> a;
    inc(a);
    cout << "\n";
    dec(a);
    return 0;
}