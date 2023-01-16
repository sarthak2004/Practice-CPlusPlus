#include<iostream>
#include<vector>
using namespace std;

void seive(int *p, int o) {
    for (int i = 3; i <= o; i += 2) {
        p[i] = 1;
    }

    for (int l = 3; l <= o; l+= 2) {
        if (p[l] == 1) {
            for (int j = l*l; j <= o; j += l) {
                p[j] = 0;
            }
        }
    }
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main() {
    int a;
    cin >> a;
    int p[1000000] = {0};
    seive(p, a);
    for (int i = 1; i <= a; i++) {
        if (p[i] == 1) {
            cout << i << " ";
        }
    }
}
