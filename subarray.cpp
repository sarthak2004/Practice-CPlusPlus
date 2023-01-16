#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    a[n] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];                    
    }
    for (int j = 0; j < n; j++) {
        for (int k = j; k < n; k++) {
            for (int l = j; l <= k; l++) {
                cout << a[l] << ", ";
            }
            cout << endl;
        }
    }
}