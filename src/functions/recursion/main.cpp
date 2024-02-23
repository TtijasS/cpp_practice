#include <iostream>
#include <string>

using namespace std;

// function prototype
unsigned long long factorial(unsigned long long);
void print(unsigned long long);
void print(double);
int sum_of_digits(int &);
double penny_doubler(int);

int main()
{
	// unsigned long long x{3};

	// unsigned long long factorial_result{};

	// factorial_result = factorial(x);

	// print(factorial_result);

	// int number = 1234567;

	// int result = sum_of_digits(number);

	// print(result);

	double result{};

	result = penny_doubler(18);

	print(result);
}

// function definition
unsigned long long factorial(unsigned long long x)
{
	if (x == 0)
		return 1;
	return x * factorial(x - 1);
}

void print(unsigned long long x)
{
	cout << x << endl;
}

void print(double x)
{
	cout << x << endl;
}
int sum_of_digits(int &number)
{
	if (number < 10)
	{
		return number;
	}

	string str_n = to_string(number);

	char first_char = str_n.at(0);
	int first_int = first_char - '0';
	string rest_of_str = str_n.substr(1);
	int rest_of_int = stoi(rest_of_str);

	return first_int + sum_of_digits(rest_of_int);
}

double penny_doubler(int days)
{
	if (days == 1)
		return 0.01;

	return (penny_doubler(days - 1) * 2);
}