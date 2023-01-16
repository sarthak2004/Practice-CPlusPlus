#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int a, int arr[]) {
    int e = 9, s = 0, mid;
    while (e >= s) {
        mid = (s+e)/2;
        if (arr[mid] == a) {
            return mid;
        }
        if (arr[mid] < a) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return -1;
}

int main() {
    int a;
    int arr[] = {5, 6, 23, 45, 65, 8, 99, 66, 21, 74};
    sort(arr, arr + 10);
    cin >> a;
    cout << binary_search(a, arr);
    return 0;
} 