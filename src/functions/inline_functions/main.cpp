/*
Inline functions are a C++ enhancement feature to increase
the execution time of a program.
Functions can be instructed to compiler to make them inline
so that compiler can replace those function definition
wherever those are being called.
Compiler replaces the definition of inline functions
at compile time instead of referring function definition at runtime.
*/

#include <iostream>

using namespace std;
// function prototype
inline int add_numbers(int &a, int &b); // inline function

int main()
{
	int a{10};
	int b{20};
	int result{0};
	// what happens is that the compiler replaces
	// the function call with the function definition
	// that means instad of add_numbers(a, b) the compiler
	// will replace it with a + b
	result = add_numbers(a, b);

	cout << "The result is: " << result << endl;
}

inline int add_numbers(int &a, int &b)
{
	return a + b;
}