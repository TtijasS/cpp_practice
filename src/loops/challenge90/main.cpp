#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])

{
    vector<int> vec{};

    for (char c{' '}; c != 'Q' && c != 'q';)
    {
        cout << "P - print vector" << endl;
        cout << "A - add number" << endl;
        cout << "M - display mean of numbers" << endl;
        cout << "L - display the largest number" << endl;
        cout << "S - display the smallest number" << endl;
        cout << "Q - quit" << endl;

        cin >> c;

        if (c == 'P' || c == 'p')
        {
            cout << "[";
            for (int i {0} ; i < vec.size(); ++i){
                cout << " " << vec[i] << ((i <  vec.size()-1) ? ", " : " ");
                
            }
            cout << "]" << endl;
        }
        else if (c == 'A' || c == 'a')
        {
            int new_int {};
            cout << "Enter an intiger: ";
            cin >> new_int;
            vec.push_back(new_int);
        }
        else if (c == 'M' || c == 'm')
        {
            double sum_of_vec {0};
            for (int el : vec)
            {
                sum_of_vec += el;
            }
            double mediane {sum_of_vec / vec.size()};
            cout << "Sum of vec: " << sum_of_vec << endl;
            cout << "Mediane: " << mediane << endl;
        }
        else if (c == 'L' || c == 'l')
        {
            if (vec.size()){
                int *largest = &vec.at(0);
                /* largest = &vec[0];
                cout << "largest = " << largest << endl;
                cout << "largest* = " << *largest << endl;
                largest = largest;
                cout << "largest = " << largest << endl;
                cout << "largest* = " << *largest << endl;
                cout << "vec[0] = " << vec[0] << endl;
                cout << "&vec[0] = " << &vec[0] << endl; */
                
                for (int i {1} ; i < vec.size(); ++i)
                    largest = (*largest < vec.at(i)) ? &vec.at(i) : largest;
                cout << "Largest is: " << *largest << " @ " << largest << endl;

            }else{
                cout << "Cant execute operation. Vector @ " << &vec << " is empty." << endl;
            }
        }
        else if (c == 'S' || c == 's')
        {
            if (vec.size() < 5);
                cout << "vec.size() <= 5" << endl;
        }
    }

    cout << "Good bye!" << endl;

    return 0;
}
