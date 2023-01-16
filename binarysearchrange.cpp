#include<iostream>
#include<algorithm>
using namespace std;

binary_searchstart(int a, int arr[]) {
    int s = 0, e = 18, si = -1, m;
    while (e >= s) {
        m = (s+e)/2;
        if (arr[m] == a) {
            si = m;
            e = m - 1;
        }
        else if (arr[m] > a) {
            e = m -1;
        }
        else {
            s = m + 1;
        }
    }
    return si;
}

binary_searchend(int a, int arr[]) {
    int s = 0, e = 18, si = -1, m;
    while (e >= s) {
        m = (s+e)/2;
        if (arr[m] == a) {
            si = m;
            s = m + 1;
        }
        else if (arr[m] < a) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }
    return si;
}

bool binary_search(int a, int arr[]) {
    int e = 18, s = 0, mid;
    while (e >= s) {
        mid = (s+e)/2;
        if (arr[mid] == a) {
            return true;
        }
        if (arr[mid] < a) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return false;
}

int main() {
    int a;
    int arr[] = {5, 6, 8, 8, 8, 8, 8, 8, 8, 9, 8, 8, 21, 7, 23, 23, 45, 66, 74};
    sort(arr, arr + 19);
    cin >> a;
    if (binary_search(a, arr)) {
        cout << binary_searchstart(a, arr) << ", " << binary_searchend(a, arr);
    }
    else {
        cout << "not present";
    }
    return 0;
} 