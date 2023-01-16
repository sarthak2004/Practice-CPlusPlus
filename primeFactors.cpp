#include <bits/stdc++.h>
using namespace std;

void seive(int* arr, int a) {
    for (int i = 3; i <= a; i += 2) {
        arr[i] = 1;
    }
    for (int i = 3; i <= a; i++) {
        if (arr[i] != 0) {
            for (int j = i*i; j <= a; j += i) {
                arr[j] = 0;
            }
        }
    }
    arr[2] = 1;
}

int main() {
    int a, count = 0, c;
    vector<pair<int, int>> factors;
    cin >> a;
    c = a;
    int arr[a+1] = {0};
    seive(arr, a);
    for (int i = 2; i*i <= c; i++) {
        if (arr[i] != 0) {
            if (a % i == 0) {
                while (a % i == 0) {
                    a /= i;
                    count++;
                }
                if (count != 0) {
                    factors.push_back(make_pair(i, count));
                    count = 0;
                }
            }
        }
    }
    if (a != 1) {
        factors.push_back(make_pair(a, 1));
    }

    for (auto factor: factors) {
        cout << "(" << factor.first << ", " << factor.second << ")" << " ";
    }
    return 0;
}
