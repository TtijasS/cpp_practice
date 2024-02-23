#include <iostream>
#include <vector>
#include <random>
#include <cmath>

#define M_PI 3.14159265358979323846

int random_int_gen(int lower_bound, int upper_bound)
{
	int random_number{};
	std::random_device rand_device;								   // obtain a rand number form hardware
	std::mt19937_64 gen(rand_device());							   // seed the generator
	std::uniform_int_distribution distr(lower_bound, upper_bound); // define the range

	random_number = distr(gen);

	return random_number;
}

float calculate_circle_area(float radius)
{
	return M_PI * pow(radius, 2);
}

float calculate_circle_circumfenrence(float radius)
{
	return 2 * M_PI * radius;
}

int main(int argc, char const *argv[])
{
	int rand_int{}; // Declare and initialize rand_int
	rand_int = random_int_gen(1, 100);

	std::cout << std::endl;
	std::cout << "Random number: " << rand_int << std::endl; // Print the random number

	std::cout.precision(10);		// Set the precision to x decimals
	std::cout << M_PI << std::endl; // Print the value of pi
	// print all decimals of pi and not just first 5

	float circle_area = calculate_circle_area(rand_int);

	std::cout << "The area of a circle with radius " << rand_int << " is " << circle_area << std::endl;

	std::cout << "The circumference of a circle with radius " << rand_int << " is " << calculate_circle_circumfenrence(rand_int) << std::endl;
	return 0;
}
