#include <iostream>
#include <string>
#include <vector>
using namespace std;

// when we want to modify the original value that was passed to the funciton
// we use pass by reference approach
int a{10};
int b{20};
vector<int> vec{1, 2, 3, 4, 5};

// function prototypes
void swap_values(int &a, int &b);						   // pass by reference, modifies original values
void zero_write_vector(vector<int> vec);				   // pass by value, modified with index based loop (modifies a copy of the original vector)
void zero_write_ref_vector(vector<int> &vec);			   // pass by reference, modified with index based loop
void print_vector(const vector<int> &vec);				   // pass by ref but we make it read only with const param
void multiply_ref_vector_by(vector<int> &vec, int factor); // here we use pass by reference in the loop
void clear_vector_by_ref(vector<int> &vec);

int main(int argc, char *argv[])
{
	cout << "Pass by refference is usefull when we want to modify the original value" << endl;
	cout << "Before swap: a = " << a << "; b = " << b << endl;
	swap_values(a, b);
	cout << "After swap: a = " << a << "; b = " << b << endl;
	cout << endl;

	cout << "Vectors are passed by value but it takes double the space!" << endl;
	cout << "Before zero write: ";
	print_vector(vec);
	zero_write_vector(vec);
	cout << "Zero write pass-by-value : ";
	print_vector(vec);
	cout << "Original data was not modified!" << endl;
	cout << "Now we pass vector by refference" << endl;
	cout << "Zero write pass-by-ref: ";
	zero_write_ref_vector(vec);

	cout << "Modify vector to starting values" << endl;
	vec = {1, 2, 3, 4, 5};
	cout << "Before multiply: ";
	print_vector(vec);
	multiply_ref_vector_by(vec, 10);
	cout << "After multiply: ";
	print_vector(vec);

	cout << "Clear vector passed by ref" << endl;
	clear_vector_by_ref(vec);
	cout << "After clear: ";
	print_vector(vec);
	return 0;
}

void swap_values(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void zero_write_vector(vector<int> vec)
{
	for (int i{0}; i < vec.size(); ++i)
	{
		vec[i] = 0;
	}
}

void zero_write_ref_vector(vector<int> &vec)
{
	for (int i{0}; i < vec.size(); ++i)
	{
		vec[i] = 0;
	}
}

void multiply_ref_vector_by(vector<int> &vec, int factor)
{
	for (int &i : vec)
	{
		i *= factor;
	}
}

void print_vector(const vector<int> &vec)
{
	cout << "vector < ";
	for (int val : vec)
	{
		cout << val << " ";
	}
	cout << ">" << endl;
}

void clear_vector_by_ref(vector<int> &vec)
{
	vec.clear();
}