#include<iostream>
#include<vector>
using namespace std;

int lastOcc(int *arr, int key, int size) {
    if(arr[size] == key || size == -1) {
        return size;
    }
    return lastOcc(arr, key, --size);
}

int firstOcc(int *arr, int key, int start, int size) {
    if (arr[start] == key) {
        return start;
    }
    else if(start == size + 1) {
        return -1;
    }
    return firstOcc(arr, key, ++start, size);
}

void allOccurences(int *arr, vector<int> &occ, int key, int size) {
    if (size == -1) {
        return;
    }
    if (arr[size] == key) {
        occ.push_back(size);
    }
    allOccurences(arr, occ, key, --size);
}

int main() {
    int arr[] = {56, 12, 34, 56, 56, 78, 90, 56, 90, 43}, key;
    vector<int> occ;
    cin >> key;
    cout << "Fist Occurence: " << firstOcc(arr, key, 0, sizeof(arr)/sizeof(int) - 1) << endl;
    cout << "Last Occurence: " << lastOcc(arr, key, sizeof(arr)/sizeof(int) - 1) << endl;
    allOccurences(arr, occ, key, sizeof(arr)/sizeof(int) - 1);
    cout << "All occurences: ";
    for(int i = 0; i < occ.size(); i++) {
        cout << occ[i] << ", ";
    }
    return 0;
}
