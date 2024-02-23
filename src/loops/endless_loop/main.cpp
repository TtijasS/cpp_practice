#include <iostream>
using namespace std;

int main(){
    for (int outer_lube {0}; outer_lube <= 2 ; ++outer_lube){
        for (int inner_lube {0}; inner_lube <= 3 ; ++inner_lube){
            cout << "Outer lube: " << outer_lube << ", inner lube: " << inner_lube << endl;
        }
    }
    return 0;
}