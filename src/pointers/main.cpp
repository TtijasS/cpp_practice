#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "custom_structs.h"
#include "custom_functions.h"

using namespace std;

int array_of_ints[10] = {3, 2, 1, 2, 1, 8, 10, -2, -5, 4};
const int array_size = sizeof(array_of_ints) / sizeof(int);
indexed_generic_pointer_type array_of_pointers[sizeof(array_of_ints) / sizeof(int)];
indexed_float_type array_of_indexed_floats[sizeof(array_of_ints) / sizeof(int)];
indexed_int_type array_of_indexed_ints[sizeof(array_of_ints) / sizeof(int)];

int main()
{
    // map the pointers of the array of pointers
    for (int i = 0; i < array_size; ++i)
    {
        array_of_indexed_ints[i].indx = i;
        array_of_indexed_ints[i].val = array_of_ints[i];
    }
    print_array(array_of_indexed_ints, array_size);
    qsort(array_of_indexed_ints, array_size, sizeof(indexed_int_type), compare_indexed_int_type_ascending);
    cout << endl;
    cout << endl;
    // int result = compare_indexed_int_type_ascending(&array_of_indexed_ints[0], &array_of_indexed_ints[1]);
    print_array(array_of_indexed_ints, array_size);
    qsort(array_of_indexed_ints, array_size, sizeof(indexed_int_type), compare_indexed_int_type_descending);

    cout << endl;
    print_array(array_of_indexed_ints, array_size);
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
