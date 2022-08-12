#include<iostream>
#include<math.h>
using namespace std;

void selectionsort(int a[], int n) {
    int b;
    for (int x = 0; x < n; x++) {
        int minIndex = x;
        for (int j = x; j < n; j++) {
            if (a[j] < a[x]) {
                minIndex = j;
            }
        }
        b = a[minIndex];
        a[minIndex] = a[x];
        a[x] = b;        
    }
    for (b = 0; b < n; b++) {
        cout << a[b] << " ,";
    }
}

int main() {
    int n, b;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    selectionsort(a, n);
    return 0;
}