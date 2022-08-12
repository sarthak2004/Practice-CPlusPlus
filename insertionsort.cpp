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
        int e = a[x];
        int j = x - 1;
        while (j >= 0 && a[j] > e) {
            a[x] = a[j];
            j--; 
        }
        a[j+1] = e;
    }
    for (int q = 0; q < n; q++) {
        cout << a[q] << " ,";
    }
    return 0;
}