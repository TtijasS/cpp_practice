#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string user_input;

    cout << "Enter a string: " << endl;
    getline(cin, user_input);

    cout << "User entered: " << user_input << endl;

    unsigned int bottom_width = static_cast<unsigned int>(user_input.length()) * 2 - 1;
    unsigned int spaces_n{bottom_width - 1};
    cout << "Bottom width: " << bottom_width << "   Spaces: " << spaces_n << endl;

    int char_i{0};

    for (int i{0}; i < bottom_width; ++i) {
        string output_str;
        string spaces(spaces_n - i, ' ');
        bool movement{true};
        output_str += spaces;
        for (int j{}; j <= i; ++j) {
            // cout << "char_i: " << char_i << endl;1
            output_str += user_input.at(char_i);
            output_str += ' ';
            if (movement && char_i == user_input.length() - 1) {
                movement = false;
            } else if (!movement && char_i == 0) {
                movement = true;
            }

            if (movement)
                ++char_i;
            else
                --char_i;
        }
        char_i = 0;
        output_str += spaces;
        cout << output_str << endl;
    }
    /*

            1
            1 2
            1 2 3
            1 2 3 4
        1 2 3 4 5
        1 2 3 4 5 4
        1 2 3 4 5 4 3
        1 2 3 4 5 4 3 2
    1 2 3 4 5 4 3 2 1
    */

    return 0;
}
