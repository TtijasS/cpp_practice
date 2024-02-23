#include <stdlib.h>
#include <time.h>

#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const* argv[]) {
    string user_message;
    string encripted_message;
    string decripted_message;

    cout << "Enter a message to get encripted: ";
    getline(cin, user_message);

    cout << "User message: " << user_message << endl;

    vector<int> vec1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                     26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72,
                     73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115,
                     116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127};

    vector<int> vec2{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                     26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72,
                     73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115,
                     116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127};

    auto rd = random_device{};
    auto rng = default_random_engine{rd()};
    shuffle(vec2.begin(), vec2.end(), rng);

    for (int i : vec2)
        cout << i << " ";

    cout << endl;
    cout << "Encripting" << endl;
    for (char c : user_message) {
        int to_int{static_cast<int>(c)};
        int as_new_int{vec2.at(to_int)};
        char as_char{static_cast<char>(as_new_int)};
        cout << c << " == " << to_int << " -> " << as_new_int << " = " << as_char << endl;
        encripted_message += as_char;
    }

    cout << "Encripted: ";
    for (char c : encripted_message) {
        cout << c;
    }

    cout << endl;
    cout << "Decripting" << endl;
    for (char c : encripted_message) {
        int to_int{static_cast<int>(c)};
        vector<int>::iterator iter{find(vec2.begin(), vec2.end(), to_int)};
        int el_pos{0};
        char old_ch{'0'};
        if (iter != vec2.end()) {
            el_pos = iter - vec2.begin();
            cout << "Element " << c << " = " << to_int << " found at pos: " << iter - vec2.begin() << endl;
            old_ch = static_cast<char>(el_pos);
        } else {
            cout << c << " not found" << endl;
        }
        cout << c << " == " << to_int << " -> " << el_pos << " = " << old_ch << endl;
        decripted_message += old_ch;
    }
    cout << "Decripted: ";
    for (char c : decripted_message) {
        cout << c;
    }
    cout << endl;

    return 0;
}
