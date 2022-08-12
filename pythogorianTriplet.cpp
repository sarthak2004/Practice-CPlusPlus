#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int x, y, z, a, b, c;
    cin >> a >> b >> c;
    x = max(a, max(b, c));
    y = min(a, min(b, c));
    z = x + y - (a + b +c);
    if (pow(x, 2) == pow(y, 2) + pow(z, 2)) {
        cout << "pythogorian triplet";
    }
    return 0;
}