#include<iostream>
using namespace std;

int m, n;

int findNumRow(int a[][100], int m, int search) {
    int row = -1;
    for (int i = 0; i < m; i++) {
        if (a[i][0] <= search) {
            row = i;
        }
        else if (i == m - 1) {
            if (row == -1) {
                return -1;
            }
        }
    }
    return row;
}

int main() {
    int search, row, start = 1;
    cin >> m >> n >> search;
    int a[100][100] = {0};
    // for (int x = 0; x < m; x++) {
    //     for (int y = 0; y < n; y++) {
    //         a[x][y] = 0;
    //     }
    // }
    for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++) {
            a[x][y] = start;
            start +=1;
        }
    }

    row = findNumRow(a, m, search);
    if (row == -1) {
        cout << "not found here" << endl;
    } else {
        for (int j = 0; j < n; j++) {
            if (a[row][j] == search) {
                cout << "found at" << row + 1 << ", " << j + 1;
                break;
            }
            else if (j == n-1) {
                cout << "not found" << endl;
            }
        }
    }
    return 0;
}
