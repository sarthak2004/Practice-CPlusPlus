#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;

int main() {
    int maxLen = 0, crrLen = 0, n;
    char a[1000], b[1000];
    cin >> n;
    cin.get();
    for (int i  = 0; i < n; i++) {
        cin.getline(a, 1000, '\n');
        crrLen = strlen(a);
        if (crrLen > maxLen) {
            strcpy(b, a);
        }
        maxLen = max(maxLen, crrLen);
    }
    cout << b << ' ' << maxLen;
    return 0;
}