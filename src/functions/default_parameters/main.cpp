#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

/*
 * Default parameters are only specified in function prototypes and not in the function definition.
 */

// Init variables
double cost{10};

// Function prototypes
double calculate_costs(double cost = -1.0, double tax_rate = 0.22, double shipping = 4.0);

// Main function
int main(int argc, char const *argv[])
{
	cout << "All default params: " << calculate_costs(cost) << endl;
	cout << endl;
	cout << "Custom tax_rate: " << calculate_costs(cost, 0.1) << endl;
	cout << endl;
	cout << "Custom tax_rate and shipping: " << calculate_costs(cost, 0.1, 0.5) << endl;
	cout << endl;
	cout << "Zero params passed example:" << calculate_costs() << endl;
}

// Function definitions
double calculate_costs(double cost, double tax_rate, double shipping)
{
	cout << endl;
	cout << "(calculate_cost running!)" << endl;
	cout << "Params used: " << endl;
	cout << "Cost: " << cost << endl;
	cout << "Tax rate: " << tax_rate << endl;
	cout << "Shipping: " << shipping << endl;

	if (cost == -1.0)
	{
		cout << "No cost provided, returning 0.0." << endl;
		return 0.0;
	}

	double tax_cost = cost * tax_rate;

	cout << "Calculated tax cost: " << tax_cost << endl;
	double full_cost{};
	full_cost = cost + tax_cost + shipping;

	return full_cost;
}