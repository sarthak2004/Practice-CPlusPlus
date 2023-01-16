#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int size, count, num1, j = 0;
    double num = 0;
    cin >> size;
    int arr2[64] = {0};
    for (int i = 0; i < size; i++) {
        cin >> num1;
        j = 0;
        while (num1 > 0) {
            int lastbit = num1 & 1;
            arr2[j] += lastbit;
            num1 >> 1;
            j++;
        }
    }
    cout << 34;
    for (int a = 0; a < 64; a++) {
        if (arr2[a] % 3 != 0) {
            num = num + pow(2, a);
        }
    }
    cout << num;
    return 0;
}