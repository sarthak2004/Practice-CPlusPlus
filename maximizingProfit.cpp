#include<iostream>
using namespace std;

int main() {
    int maxsum = 0, sum = 0, table, chair, a, b, M, noChairs, noTables;
    cin >> M;
    for (int noChairs = 0; noChairs <= 120; noChairs++) {
        for (int noTables = 0; noTables <= 50; noTables++) {
            if ((noChairs * 2) + (noTables * 8) <= 400 && ((noChairs + noTables*2) <= 120)) {
                (noTables) > M ? sum += (noTables - M) * 100 + M*90: sum += noTables * 90;
                (noChairs > M) ? sum += (noChairs - M) * 30 + 25*M : sum += noChairs * 25;
                // cout << noChairs << " : " << noTables << " : " << sum << endl;
                if (sum >= maxsum) {
                    maxsum = sum;
                    table = noTables;
                    chair = noChairs;
                }
            }
            sum = 0;
        } 
    }

    cout << "table : " << table << "\nchair : " << chair << " \nprofit : " << maxsum;
    return 0;
}
