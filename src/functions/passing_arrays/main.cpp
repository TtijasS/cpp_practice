#include <iostream>
using namespace std;

// function prototypes
// This type of function actually passes a pointer to the zero index of the array
// that is actually a copy of the original array address
void zero_array(int numbers[], size_t size);
void print_array(const int numbers[], size_t size); // const is read-only option of function
void print_size5_array(const int numbers[5]);

int main(int argc, char *argv[])
{
	// create a vector and then print all elements of vector
	int numbers[] = {1, 2, 3, 4, 5};

	print_array(numbers, 5);
	cout << "\nZeroing array" << endl;
	zero_array(numbers, 5);
	cout << "Modified array" << endl;
	print_array(numbers, 5);

	cout << "\n";
	print_size5_array(numbers);

	return 0;
}

// function definitions

void zero_array(int numbers[], size_t size)
{
	for (size_t i{0}; i < size; ++i)
	{
		numbers[i] = 0;
	}
}

void print_array(const int numbers[], size_t size)
{
	cout << "array(";
	for (size_t i{0}; i < size; ++i)
	{
		cout << numbers[i] << ", ";
	}
	cout << ")";
}

void print_size5_array(const int numbers[5])
{
	cout << "array(";
	for (int i{0}; i < 5; ++i)
	{
		cout << numbers[i] << ", ";
	}
	cout << ")";
}