#include<iostream>
using namespace std;

int checksingle(vector<int> a) {
    int diffnumber = 0;
    for(int i = 0; i < a.size(); i++) {
        diffnumber = diffnumber^a[i];
    }
    return diffnumber;
}

int main() {
    vector<int> a = {0, 2, 2, 6, 7, 7, 6};
    cout << checksingle(a) << endl;
    return 0;
}