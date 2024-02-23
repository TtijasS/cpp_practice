// When you pass data into formal_a function it is passed by-value
// A copy of the data is passed to the function
// The original data is not modified

/* Formal vs Actual parameters
 Formal - parameters defined in the function header
 Actual - parameter used in the function call, the arguments
*/

/* Negatives of passing by value:
 1. Passing large data structures can be slow since we have to copy the data first
 2. Passing large data structures will double the memory usage
 3. The original data is not modified
*/

#include <iostream>
#include <vector>
#include <string>

int add_numbers(int formal_a, int formal_b); // function prototype
int number_times_two(int formal_a);
void clear_vector_values(std::vector<std::string> string_vector);
void print_out_vector(std::vector<std::string> string_vector);

int main(int argc, char const *argv[])
{
	std::cout << "Single variable example: " << std::endl;
	int actual_a{10}; // actual parameters
	int actual_b{20}; // actual parameters
	int result{};

	std::cout << "Current actual_a: " << actual_a << std::endl;
	std::cout << "Now we modify actual_a with number_times_two fn" << std::endl;
	result = number_times_two(actual_a);
	std::cout << "The result of number_times_two is: " << result << std::endl;
	std::cout << "actual_a is still " << actual_a << std::endl;

	result = add_numbers(actual_a, actual_b);

	std::cout << "A different example where we add two numbers like this formal_a += formal_b;." << std::endl;
	std::cout << "actual_a: " << actual_a << std::endl;
	std::cout << "actual_b: " << actual_b << std::endl;
	std::cout << "The result is: " << result << std::endl;

	std::cout << "Now we modify actual_a and actual_b and only now the actually change." << std::endl;
	actual_a *= 10;
	actual_b *= 10;

	// vector example
	std::cout << std::endl;
	std::cout << "Vector example: " << std::endl;
	std::vector<std::string> string_vector{"one", "two", "three"};

	std::cout << "The string_vector before calling clear_vector_values: " << std::endl;
	print_out_vector(string_vector);

	clear_vector_values(string_vector);
	std::cout << "Now we call clear_vector_values and the string_vector is: " << std::endl;
	print_out_vector(string_vector);
	std::cout << "The original string_vector is not modified." << std::endl;
	return 0;
}

// example of passing by value

/*
 * Function adds two numbers and returns the result.
 *
 * The formal_a and formal_b are formal parameters, which means they are copies
 * of the actual parameters that get passed into the function.
 * The original data is not modified.
 *
 * @param formal_a The first number
 * @param formal_b The second number
 * @return The sum of the two numbers
 */
int add_numbers(int formal_a, int formal_b)
{
	formal_a += formal_b;

	return formal_a;
}

/*
 * Function multiplies a number by 2 and returns the result.
 *
 * The formal_a is a formal parameter, which means it is a copy
 * of the actual parameter that gets passed into the function.
 * The original data is not modified.
 *
 * @param formal_a The number to be multiplied by 2
 * @return The result of the number multiplied by 2
 */
int number_times_two(int formal_a)
{
	return formal_a * 2;
}

void clear_vector_values(std::vector<std::string> string_vector)
{
	string_vector.clear();
}

void print_out_vector(std::vector<std::string> string_vector)
{
	for (auto s : string_vector)
		std::cout << s << std::endl;
}