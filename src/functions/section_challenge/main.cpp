#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

struct mpu_data_type
{
	int16_t accel_gyro_raw[6];
	double errors[6];
	double data_g[6];
};

mpu_data_type mpu_data = {
	.accel_gyro_raw = {0},
	.errors = {0},
	.data_g = {0},
};

// function prototypes
void print_numbers(vector<int> &);
void print(int &);
void print(double &);
void print(char &);
double calculate_mean(vector<int> &);
void print_binary(uint8_t *);

int main()
{
	// for (int i = 0; i < sizeof(mpu_data.accel_gyro_raw); ++i)
	// {
	// 	mpu_data.accel_gyro_raw[i] = 33;
	// }
	// print_array(mpu_data.accel_gyro_raw[sizeof(mpu_data.accel_gyro_raw)]);
	// return 0;
	int i = 1024;
	cout << i % 16 << endl;
}

// void print_array(T (&ar)[array_size])
// {
// 	printf("< ");
// 	for (size_t i; i < array_size; ++i)
// 		printf("%i", ar[i]);
// 	printf(">");
// }

// function declarations
// void print(int &n)
// {
// 	cout << n;
// }

// void print(double &n)
// {
// 	cout << n;
// }

// void print(char &ch)
// {
// 	cout << ch;
// }

// void print_numbers(vector<int> &vec)
// {
// 	cout << "< ";
// 	for (int &n : vec)
// 	{
// 		print(n);
// 		cout << ", ";
// 	}
// 	cout << " >";
// }

// double calculate_mean(vector<int> &vec)
// {
// 	int vector_sum{};

// 	for (int &n : vec)
// 	{
// 		vector_sum += n;
// 	}

// 	return static_cast<double>(vector_sum) / vec.size();
// }

// int find_largest(vector<int> &vec)
// {
// 	int largest_n = vec.at(0);
// 	for (int &n : vec)
// 	{
// 		if (largest_n > n)
// 			largest_n = n;
// 	}
// }

// void quick_sort_vector(vector<int> &vec, int pivot = 0)
// {
// 	if (pivot == 0)
// 		pivot = vec.size() - 1;
// 	int right{0};		  // 0
// 	int left = pivot - 1; // 6

// 	// 2, 6, 5, 0, 8, 7, 1, 3
// 	// 0, 1, 2, 3, 4, 5, 6, 7

// 	while (left > right)
// 	{
// 		if (vec.at(right) < vec.at(pivot))
// 			++right;

// 		if (vec.at(left) > vec.at(pivot))
// 			--left;

// 		if (vec.at(right) < vec.at(left))
// 			swap_elements(vec.at(right), vec.at(left));
// 	}
// }

// void swap_elements(int &a, int &b)
// {
// 	int tmp{};
// 	tmp = a;
// 	a = b;
// 	b = tmp;
// }

void print_binary(uint8_t *n)
{
	for (int i = 7; i >= 0; --i)
	{
		uint8_t mask = 1 << i;
		printf("%u", (*n & mask) ? 1 : 0);
	}
}
