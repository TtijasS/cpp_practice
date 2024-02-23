#include <iostream>
using namespace std;

// function prototype
void print(const int &i);

// global variables
int num_1{10}; // never used because of local scopes
int num_2{20}; // never used because of local scopes
int num_3{30}; // used because no local scope overrides it

int main()
{
	int num_1{1}; // both local to main
	int num_2{2};

	cout << "Print main:" << endl;
	print(num_1);
	print(num_2);
	print(num_3);
	{ // new scope first level in main
		cout << "Create new num_1 on main_1" << endl;
		int num_1{100};
		cout << "Print main_1:" << endl;
		print(num_1);
		print(num_2);
		print(num_3);

		{ // new scope second level in main
			cout << "Print main_1_1:" << endl;
			print(num_1);
			print(num_2);
			print(num_3);

			cout << "Modify main_1_1" << endl;
			num_1 = 0;
			num_2 = 0;

			cout << "Print main_1_1:" << endl;
			print(num_1);
			print(num_2);
			print(num_3);
		}
		cout << "Print main_1:" << endl;
		print(num_1);
		print(num_2);
		print(num_3);
	}
	cout << "Print main:" << endl;
	print(num_1);
	print(num_2);
	print(num_3);
}

void print(const int &i)
{
	cout << i << endl;
}