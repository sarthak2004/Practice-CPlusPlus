#include<iostream>
using namespace std;

int main() {
    int maxor = 0, index, or = 0, arr[] = {1, 3, 7, 0, 8, 1}, a = 0, k;
    cin >> k;
    for(int i = 0; i < k; i++) {
        arr[i]++;
        for(int j = 0; j < 6; j++) {
            or |= arr[j];
        }
        arr[i]--;
        if (or >= maxor) {
            maxor = or;
            index = i;
        }
        or = 0;        
    }
    cout << "Max or = " << maxor << endl << "index = ";
    cout << index << " ";
    return 0;
}
