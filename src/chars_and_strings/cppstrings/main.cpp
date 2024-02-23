#include <string>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1;                  // empty string, they are auto inited
    string s2{"Tijas"};         // c-style literal converted to cpp string
    string s3{s2};              // copy of s2
    string s4{"Tijas", 3};      // Tij (first 3 chars)
    string s5{s3, 0, 2};        //  start index, length
    string s6(3, 'X');          // XXX ! constructor syntax () !
    string s7{s2 + " Strbenc"}; // concatenating cstring strcat
    string s8{"Tijas " + s6};

    // string sxy {"Tijas" + "Strbenc"} DOESNT WORK! only works on c++string or c++string combined with cstring

    char c_string[]{"C string"};
    string cpp_string{"C++ string"};

    cpp_string += c_string;

    vector<string> my_strings{s1, s2, s3, s4, s5, s6, s7, s8, c_string, cpp_string};

    for (string s : my_strings)
        cout << s << endl; // c_string can also be displayed as string

    cout << endl;
    cout << "Displaying characters of the string:";
    for (char c : cpp_string)
        cout << c << " ";
    cout << endl;

    cout << "Displaying integers of the string:";
    for (int i : cpp_string)
        cout << i << " ";
    cout << endl;

    // logic operations
    s1 = "Abcd";
    s2 = "Bacd";
    s3 = s1;
    cout << endl;
    cout << "Logic operations" << endl;
    cout << (s1 != s2) << endl;
    cout << (s1 == s3) << endl;
    cout << (s1 == s2) << endl;
    cout << (s1 <= s2) << endl;
    cout << (s1 >= s2) << endl;
    cout << (s1 > s2) << endl;
    cout << (s1 > s2) << endl;

    cout << endl;
    cout << "Extracting a substring from the string" << endl;
    s1 = "This is a test string 1234567890";
    cout << "Original str: " << s1 << endl;
    cout << "s1.substr(0,4): " << s1.substr(0, 4) << endl;
    cout << "s1.substr(10,18): " << s1.substr(10, 18) << endl;

    cout << endl;
    cout << "Find() method" << endl;
    cout << "s1.find(0): " << s1.find('0') << endl;
    cout << "s1.find(s): " << s1.find('s') << endl;
    s1 = "TTTTTugo";
    cout << "s1 = " << s1 << endl;
    cout << "s1.find_first_not_of('T'): " << s1.find_first_not_of('T') << endl;

    cout << endl;
    s1 = "This is a test or is it";
    cout << s1 << endl;
    int is_index = s1.find("is"); // finds the first is
    cout << "s1.find(\"is\"): " << is_index << endl;
    cout << "s1.substr(is_index+2, s1.length()): " << s1.substr(is_index + 2, s1.length()) << endl;
    cout << "s1.find(\"is\", is_index+2): " << s1.find("is", is_index + 2) << endl; // looks for the next is from the index (is_index+2) forward

    // LOOPING THROUGH a string
    string mystr{"This is my string"};

    for (size_t i{0}; i < mystr.length(); ++i)
    {
        cout << mystr.at(i);
    }
    cout << endl;

    for (char c : mystr)
        cout << c;
    cout << endl;

    // ERASING
    const int n_erase{5};
    cout << "Erasing first " << n_erase << " chars from mystr" << endl;
    mystr.erase(0, n_erase);
    cout << "mystr: " << mystr << endl;

    string unformatted_full_name{"StephenHawking"};

    size_t upperchar_indx{};
    for (char c : unformatted_full_name.substr(1, unformatted_full_name.length()))
    {
        if (isupper(c))
        {
            cout << c << " is upper" << endl;
            upperchar_indx = unformatted_full_name.find(c);
            cout << "at " << upperchar_indx << endl;
            break;
        }
        // if (upperchar_indx != 0)
    }

    string first_name{unformatted_full_name, 0, upperchar_indx};
    string last_name{unformatted_full_name, upperchar_indx, unformatted_full_name.length() - 1};
    string full_name{};
    full_name += first_name + last_name;
    full_name.insert(7, " ");
    cout << first_name << endl;
    cout << last_name << endl;
    cout << full_name << endl;

    size_t whitesp{full_name.find(' ')};
    full_name.erase(0, whitesp + 1);
    cout << full_name;

    string aa{"A"};
    string bb{"B"};

    cout << (bb < aa) << endl;
    /*     // FIND WORD
        char word1[20]{};
        string word2{};
        string s9{"Find a secret word in this string hehe"};
        cout << "Enter the word1 to find: " << endl;
        cin.getline(word1, 20); // reads the line from cin until  new line
        cout << "Enter the word2 to find: " << endl;
        getline(cin, word2); // reads the line from cin
        cout << "Enter the word2 to find: " << endl;
        getline(cin, word2); // reads the line from cin
        cout << "User entered word1: " << word1 << endl;
        cout << "User entered word2: " << word2 << endl;

        size_t w_pos{s9.find(word2)};

        if (w_pos != string::npos)
            printf("word %s found at position %d", word2, w_pos);
        else
            cout << "word isn't in there" << endl; */

    return 0;
}