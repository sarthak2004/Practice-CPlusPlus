#include<iostream>
using namespace std;

bool bin(int a[], int start, int end, int x) {
    if (end >= start) {
        int mid  = (start + end)/2;
        if (a[mid] == x) {
            return true;
        }
        if (x < a[mid]) {
            if (bin(a, start, mid - 1, x)) {
                return true;
            }
        }
        if (bin(a, mid + 1, end, x)) {
            return true;
        }
    }
    return false;
}

int main() {
    int a[] = {7, 9, 20, 24, 67, 78, 89, 99};
    int x;
    cin >> x;
    int end = 7;
    cout << (bin(a, 0, end, x) ? "True" : "False");
    return 0;
}