#include <iostream>
#include <vector>
using namespace std;



int main(int argc, char const *argv[])
{
    int num_items{};

    cout << "How many items?: ";
    cin >> num_items;

    vector<int> mydata {};

    for (int i {1}; i <= num_items; ++i){
        int data_number {0};
        cout << "Data number " << i << ": ";
        cin >> data_number;
        mydata.push_back(data_number);
    }

    for (int val: mydata){
        cout << val <<'|';
        for (int i {0}; i < val; ++i)
            cout << '-';
        cout << endl;
    }
    return 0;
}
