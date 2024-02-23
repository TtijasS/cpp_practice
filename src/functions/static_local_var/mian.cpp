#include <iostream>
using namespace std;

// function prototype
void modify_with_index(int &ref_x);
// global variables
int x{1};
int main()
{
	cout << "x | i | x + i\n";
	modify_with_index(x);
	modify_with_index(x);
	modify_with_index(x);
	modify_with_index(x);
	modify_with_index(x);
}

// function definitions
void modify_with_index(int &ref_x)
{
	static int index{0};
	cout << ref_x << " + " << index << " = " << ref_x + index << endl;
	ref_x += index;
	++index;
}