#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// function prototypes
void print_guest_list(string &guest_1, string &guest_2, string &guest_3); // Fix: Change the return type to void and add a missing comma

int main()
{
	string guest_1 = "Larry";
	string guest_2 = "Moe";
	string guest_3 = "Curly";

	print_guest_list(guest_1, guest_2, guest_3);
	print_guest_list(guest_1, guest_2, guest_3);
	return 0;
}

// function definitions
void print_guest_list(string &guest_1, string &guest_2, string &guest_3) // Fix: Change the return type to void and add a missing comma
{
	// init a string array of length 3
	string *guest_list[3] = {&guest_1, &guest_2, &guest_3};

	for (string *s : guest_list) // Fix: Change the type of the loop variable from string& to string*
	{
		cout << *s << endl; // Fix: Dereference the pointer to access the string value
		*s = "nan";			// Fix: Dereference the pointer to modify the string value
	}
}
