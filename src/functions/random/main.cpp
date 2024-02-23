#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>

using namespace std;

// Function prototype
int random_int_gen(int lower_bound, int upper_bound);

int main()
{
    cout << "Random number: " << random_int_gen(1, 100) << endl;
}

int random_int_gen(int lower_bound, int upper_bound)
{
    int random_number{};
    random_device rand_device;                                // obtain a rand number form hardware
    mt19937_64 gen(rand_device());                            // seed the generator
    uniform_int_distribution distr(lower_bound, upper_bound); // define the range

    random_number = distr(gen);

    return random_number;
}
