#include <iostream>
using namespace std;

// function prototypes
int add_numbers(int a = 0, int b = 0);
// double add_numbers(double a = 0, int b = 0); // if this is used, emply calls raise ambiguous error
double add_numbers(double a, int b);
double add_numbers(int a, double b);
double add_numbers(double a, double b);

int main(int argc, char *argv[])
{
	// all of these work because of overloading
	cout << add_numbers(1, 2) << endl;
	cout << add_numbers(1.5, 2) << endl;
	cout << add_numbers(1, 2.5) << endl;
	cout << add_numbers(1.5, 2.5) << endl;
	cout << add_numbers(1, 2.5F) << endl;

	// Če ima več kot ena overloaded funkcija default parametre
	// bo vrnilo error
	// main.cpp:18:28: error: call of overloaded 'add_numbers()' is ambiguous

	cout << add_numbers() << endl;

	return 0;
}

int add_numbers(int a, int b)
{
	return a + b;
}

double add_numbers(double a, int b)
{
	return static_cast<double>(b) + a;
}

double add_numbers(int a, double b)
{
	return static_cast<double>(a) + b;
}

double add_numbers(double a, double b)
{
	return a + b;
}