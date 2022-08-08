#include<iostream>
using namespace std;

int main() {
    int num, i;
    cin >> num;
    if (num == 2){
        cout << "prime";
    }
    if (num == 1){
       cout<< "neither prime not composite"; 
    }
    for (i = 2; i < num/2; i++) {
        if (num % i == 0) {
            cout<< "composite";
            break;
        } 
        else {
            cout<< "prime";
            break;
        }
    }
    return 0;
}