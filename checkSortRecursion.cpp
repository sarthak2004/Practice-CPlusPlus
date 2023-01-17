#include<iostream>
#include<climits>
using namespace std;


int check(int x[], int i) {
    if( i >= 1 ) {
        int a = check(x, (i-1));
        if (x[i] > a) {
            return x[i];
        }
        return INT_MAX;
    }
    else {
        return x[0];
    }

    
}

int main() {
    int i;
    cin >> i;
    int x[i];
    for(int j = 0; j < i; j++) {
        cin >> x[j];
    }
    if (check(x, i-1) == INT_MAX) {
        cout << "False";
    }
    else {
        cout << "True";
    }
    return 0;
}