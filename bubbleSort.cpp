#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n-x; y++) {
            if (a[y] > a[y+1]) {
                a[y] += a[y+1];
                a[y+1] = a[y] - a[y+1];
                a[y] -= a[y+1];
            }
        }
    }
    for (int q = 0; q < n; q++) {
        cout << a[q] << " ,";
    }
    return 0;
}