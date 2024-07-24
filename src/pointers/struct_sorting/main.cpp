#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "custom_structs.h"
#include "custom_functions.h"

using namespace std;

float re[10] = {3, 2, 1, 2, 1, 8, 10, -2, -5, 4};
float im[10] = {.1, .3, .1, .3, .1, .3, .1,.2, .2, .3};
float mag[10] = {};

const size_t array_size = sizeof(re) / sizeof(int);
indexed_generic_pointer_type array_of_pointers[array_size];
indexed_float_type array_of_indexed_floats[array_size];
indexed_int_type array_of_indexed_ints[array_size];

int main()
{
    calculate_magnitudes(re, im, mag, array_size);
    // map the pointers of the array of pointers
    for (int i = 0; i < array_size; ++i)
    {
        array_of_indexed_floats[i].indx = i;
        array_of_indexed_floats[i].val = mag[i];

        array_of_indexed_ints[i].indx = i;
        array_of_indexed_ints[i].val = re[i];
    }

    cout << endl;
    cout << endl;
    // int result = compare_indexed_int_type_ascending(&array_of_indexed_ints[0], &array_of_indexed_ints[1]);
    print_indexed_array(array_of_indexed_floats, array_size);
    print_indexed_array(array_of_indexed_ints, array_size);
    cout << endl;
    print_array(array_of_indexed_ints, array_size);

    cout << endl;
    for (int i = 0; i < array_size; i++){
        printf("re: %.3f im: %.3f, mag: %.3f\n", re[i], im[i], mag[i]);
    }
    // print_array(array_of_indexed_ints, array_size);
    // cout << result << endl;

    return 0;
}

// qsort(array_of_pointers, array_size, sizeof(indexed_generic_pointer_type), compare_generic_indexed_pointers_largest_first);
// qsort(array_of_indexed_ints, array_size, sizeof(indexed_int_type), compare_indexed_int_type_ascending);

// cout
//     << "Sorted array: ";
// for (int i = 0; i < array_size; ++i)
// {
//     cout << *(static_cast<const int *>(array_of_pointers[i].ptr)) << "@" << array_of_pointers[i].indx << "; ";
// }
// cout << endl;

// qsort(array_of_indexed_floats, array_size, sizeof(indexed_float_type), compare_indexed_floats_largest_first);

// cout << "Sorted array largest first: ";
// for (int i = 0; i < array_size; ++i)
// {
//     cout << *(static_cast<const int *>(array_of_pointers[i].ptr)) << "@" << array_of_pointers[i].indx << "; ";
// }
// cout << endl;
