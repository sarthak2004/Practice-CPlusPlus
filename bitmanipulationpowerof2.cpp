#include<iostream>
using namespace std;

bool checkpower(int a) {
    return !(a & (a-1));
}

int main() {
    int a;
    cin >> a;
    cout << checkpower(a) << endl;
}