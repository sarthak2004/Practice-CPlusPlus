#include<iostream>
using namespace std;

int power(int a, int p) {
    if (p == 1) {
        return a;
    }
    return a*(power(a, p-1));
}

int main() {
    int a, p;
    cin >> a >> p;
    cout << power(a, p);
    return 0;
}