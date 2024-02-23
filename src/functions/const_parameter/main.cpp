#include <iostream>
using namespace std;

// This type of function actually passes a pointer to the zero index of the array
// to prevent modification of original data, we can add const to the parameter
void print_array(const int numbers[], size_t size); // this sets param as read-only

int main(int argc, char *argv[])
{

	int numbers[] = {1, 2, 3, 4, 5};
	// (COMMENTED OUT THE ERROR ROW! First uncomment row 25)
	// returns this error:
	// error: assignment of read-only location '*(numbers + ((sizetype)(i * 4)))'
	print_array(numbers, 5);
	return 0;
}

// function definitions
void print_array(const int numbers[], size_t size)
{
	for (size_t i{0}; i < size; ++i)
	{
		cout << numbers[i] << ", ";
		// numbers[i] = 0; // this will cause a compiler error if we add const to the parameter
	}
}