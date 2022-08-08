#include<iostream>
using namespace std;

int main() {
    int days, months, years;
    cin >> days;
    years = days/360;
    months = (days%360)/30;
    days = days%30;
    cout << days << endl << months << endl << years;
    return 0;
}