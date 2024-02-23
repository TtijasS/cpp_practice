#include <cctype>   // char based functions
#include <cstring>  // c-style string function
#include <iostream>
#include <limits>  // for clearing cin
using namespace std;

int main(int argc, char const *argv[]) {
    char first_name[24]{};
    char last_name[24]{};
    char full_name[56]{};
    char temp[56]{};
    char uninit_temp[56];  // empty and garbage memory registers

    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Full name: " << full_name << endl;
    cout << "temp: " << temp << endl;
    cout << "uninit temp (garbage): " << uninit_temp << endl;

    /* cout << "________start of garbage _______" << endl;
    for (int i {0} ; i <= 1000 ; ++i)
        cout << uninit_temp[i] << endl;

    cout << "________end of garbage _______" << endl; */

    cout << "Enter first name: ";
    cin >> first_name;

    cout << "Enter last name: ";
    cin >> last_name;

    cout << "Hello " << first_name << " " << last_name << endl;
    cout << "Name " << first_name << " is " << strlen(first_name) << " characters long." << endl;
    cout << "Last name " << last_name << " is " << strlen(last_name) << " characters long." << endl;

    /*this is how strlen() works
    "Tugo\0" is T1, u2, g3, o4, \0=STOP chars long
    "Tija\0s" is T1,i2,j3,a4,\0=STOP chars long (s6 is ignored)
    */

    char example[6]{'t', 'i', 'j', '\0', 'a', 's'};
    char example2[7]{"tija\0s"};  // needs 1 more byte, because it automatically appends NULL at the end
    cout << example << " is " << strlen(example) << " characters long " << endl;
    cout << example2 << " is " << strlen(example2) << " characters long " << endl;

    cout << "__________________ PT 2 _______________________" << endl;

    strcpy(full_name, first_name);  // first name copied into full name
    cout << "Full name: " << full_name << endl;
    strcpy(full_name, " ");  // This will not append. It replace it. New full_name is now empty
    cout << "Full name: " << full_name << endl;

    strcpy(full_name, first_name);  // we copy first name str into full name
    cout << "Full name: " << full_name << endl;
    // Concatenate f
    strcat(full_name, "_");  // we concentrate an underline into full name
    cout << "Full name: " << full_name << endl;
    strcat(full_name, last_name);  // we concentrate last name into full name

    cout << "Actually full name: " << full_name << endl;

    cout << "__________________ PT 3 _______________________" << endl;

    // Standard cin stopps at the whitespace
    cout << "Enter your full name: ";
    cin >> full_name;
    cout << "Full name: " << full_name << endl;
    cout << "------" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clears the largest possible streamsize of characters or until \n is found
    // cin.ignore(56, '\n'); // or we check just 56 bytes or until \n ... etc
    cout << "This is the numeric_limit<streamsize>::max() - " << numeric_limits<streamsize>::max() << endl;
    cout << "This is the numeric_limit<long long>::max() - " << numeric_limits<long long>::max() << endl;
    cout << "This is the numeric_limit<float>::max() - " << numeric_limits<float>::max() << endl;
    cout << "This is the numeric_limit<double>::max() - " << numeric_limits<double>::max() << endl;
    cout << "------" << endl,
        cout << "Again enter your full name: ";
    cin.getline(full_name, 56);  // this reads 56 characters or until user pressed enter
    cout << "Full name: " << full_name << endl;

    cout << "__________________ PT 4 _______________________" << endl;

    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0)  // they are the same if 0 is returned
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are NOT the same" << endl;

    cout << "Temp : " << temp << endl;
    temp[0] = tolower(temp[0]);  // changes to lower case
    temp[1] = toupper(temp[1]);  // changes to UPPER CASE
    cout << "New temp : " << temp << endl;

    if (strcmp(temp, full_name) == 0)  // they are the same if 0 is returned
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are NOT the same" << endl;

    cout << "-------" << endl;
    cout << "Comparing strcmp(temp, full_name) " << strcmp(temp, full_name) << endl;
    cout << "Comparing strcmp(full_name, temp) " << strcmp(full_name, temp) << endl;

    return 0;
}
