#include <iostream>
#include <vector>

using namespace std;

// global variables
vector<int> vec{1, 2, 2};

// function prototypes
void print_numbers(vector<int> &);
void print(int &);
void print(double &);
void print(char &);
double calculate_mean(vector<int> &);

int main()
{
	print_numbers(vec);

	double vector_mean = calculate_mean(vec);

	cout << endl;
	cout << "Mean: ";

	print(vector_mean);

	return 0;
}

// function declarations
void print(int &n)
{
	cout << n;
}

void print(double &n)
{
	cout << n;
}

void print(char &ch)
{
	cout << ch;
}

void print_numbers(vector<int> &vec)
{
	for (int &n : vec)
	{
		print(n);
		cout << ", ";
	}
}

double calculate_mean(vector<int> &vec)
{
	int vector_sum{};

	for (int &n : vec)
	{
		vector_sum += n;
	}

	return static_cast<double>(vector_sum) / vec.size();
}

int find_largest(vector<int> &vec)
{
	// int largest_n = vector.at(0);
	// for (int &n : vec.){

	// }
}
