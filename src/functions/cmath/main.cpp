#include <cmath>
#include <iostream>

using namespace std;

int main() {
    double bill_total{102.78};
    int number_of_guests{7};

    int individual_bill_1{};
    int individual_bill_2{};
    float individual_bill_3{};

    individual_bill_1 = bill_total / number_of_guests;
    individual_bill_2 = round(bill_total / number_of_guests);
    individual_bill_3 = ceil((bill_total / number_of_guests) * 100) / 100;
    float non_truncated = bill_total / number_of_guests;

    cout << individual_bill_1 << endl;
    cout << non_truncated << endl;
    cout << non_truncated - individual_bill_1 << endl;
    cout << individual_bill_2 << endl;
    cout << individual_bill_3 << endl;

    return 0;
}