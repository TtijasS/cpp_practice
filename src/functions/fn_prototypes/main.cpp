#include <iostream>

/*Prototyping means that you init functions at the top
which allows you to call them at any time later on in the program

They must be defined before they are called
They also must have the same return type and parameters as the function definition
*/

// Function prototypes
int returning_intiger_one();
void say_hello();
int *divide_numbers(int a, int b);

int main(int argc, char const *argv[])
{
	say_hello();
	std::cout << "Returning intiger one: " << returning_intiger_one() << std::endl;

	double a = 10;
	double b = 0;

	int *result = divide_numbers(a, b);
	std::cout << "Result of " << a << " divided by " << b << " is " << result[0] << " with a remainder of " << result[1] << std::endl;

	delete[] result;
	return 0;
}

/*
 * Functions prints Hello to the console
 *
 * @return void
 */
void say_hello()
{
	std::cout << "Hello" << std::endl;
}

int returning_intiger_one()
{
	return 1;
}

// write a standardised C++ function comment

/**
 * The caller is responsible for deallocating the returned array to avoid memory leaks!
 * Divides two integers and returns the quotient and remainder.
 *
 * This function dynamically allocates an array of two integers
 * and stores the quotient and remainder of the division in this array.
 *
 * @param a The dividend.
 * @param b The divisor. Must not be zero.
 * @return An integer pointer to an array of two integers:
 *         The first element is the quotient (a / b),
 *         and the second element is the remainder (a % b).
 */
int *divide_numbers(int a, int b)
{
	int *result = new int[2];
	if (b == 0)
	{
		result[0] = 0;
		result[1] = 0;
		std::cerr << "Error: Division by zero" << std::endl;
		return result;
	}

	result[0] = a / b;
	result[1] = a % b;
	return result;
}
