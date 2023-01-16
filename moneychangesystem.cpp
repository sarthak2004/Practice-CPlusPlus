#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    int money;
    cin >> money;
    int crrcoin;
    while (money != 0) {
        crrcoin = upper_bound(coins.begin(), coins.end(), money) - coins.begin() - 1;
        money = money - coins[crrcoin];
        cout << " + " << coins[crrcoin];
    }
    return 0;
}