#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n], start = 1, startrow = 0, endrow = m - 1, startcoloumn = 0, endcoloumn = n - 1;
    a[m][n] = 0;
    for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++) {
            a[x][y] = start;
            start++;
            cout << a[x][y] << " ";
        }
        cout << endl;
    }
    while (startrow <= endrow && startcoloumn <= endcoloumn) {
        for (int i = startcoloumn; i <= endcoloumn; i++) {
            cout << a[startrow][i] << " ";
        }
        startrow++;
        for (int j = startrow; j <= endrow; j++) {
            cout << a[j][endcoloumn] << " ";
        }
        endcoloumn--;
        if (startrow < endrow) {
            for (int k = endcoloumn; k >= startcoloumn; k--) {
                cout << a[endrow][k] << " ";
            }
            endrow--;
        }
        if (startcoloumn < endcoloumn) {
            for (int l = endrow; l >= startrow; l--) {
                cout << a[l][startcoloumn] << " ";
            }
            startcoloumn++;
        }
    }
    return 0;
}