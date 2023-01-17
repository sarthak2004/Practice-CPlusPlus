#include<iostream>
using namespace std;

int mult(int a, int b) {
    if(b == 1) {
        return a;
    }
    b--;
    a += mult(a, b);
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << mult(a,b);
    return 0;
}