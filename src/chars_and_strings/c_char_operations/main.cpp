#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    char c {'c'};
    char ch {'C'};

    cout << isupper(c) << endl;
    cout << isupper(ch) << endl;

    const char a_string[4] {'a', 'b', 'c', '\0'}; // we added NULL at the end
    const char also_a_string[4] {'a', 'b', 'c'};  // adds NULL at the end
    const char not_string[4] {'a', 'b', 'c', ' '};    // no NULL at the end
    const char two_strings[6] {'a', 'b', '\0', 'c', 'd', '\0'};

    for (int i {0}; i < sizeof(also_a_string)/sizeof(char); ++i){
        cout << "String:      " << a_string[i];
        if (a_string[i] == '\0')
            cout << "NULL" << endl;
        else 
            cout << endl;
        cout << "Also string: " << also_a_string[i];
        if (also_a_string[i] == '\0')
            cout << "NULL" << endl;
        else 
            cout << endl;
        cout << "Not string:  " << not_string[i];
        if (not_string[i] == '\0')
            cout << "NULL" << endl;
        else 
            cout << endl;
    }

    cout << a_string << endl;
    cout << also_a_string << endl;
    cout << not_string << endl; // problem

    return 0;
}
