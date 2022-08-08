#include<iostream>
using namespace std;

int main() {
    int row, coloumn;
    cin >> row >> coloumn;
    for (int i = 0; i < row; i++) {
        if (i == 0 || i == row-1) {
            for (int j = 0; j < coloumn; j++) {
                cout << "* ";
            }
        }
        else{
            for (int j = 0; j < coloumn; j++) {
                if (j == 0 || j == coloumn-1) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
        
    }