#include <stdint.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include "custom_f.h"

using namespace std;

// char bytes[] = {'\x00','\x00','\x00','\x00','\xff', '\xfe', '\x00', '\xfe', '\xff','\x00','\x00'};
unsigned char bytes[] = "\x00\x00\x00\x00\xff\xfe\x00\xfe\xff\x00\x00";
size_t bytes_size = sizeof(bytes) - 1; // -1 to remove null terminator
unsigned char sequence[] = "\x00\x00";
size_t sequence_size = sizeof(sequence) - 1;

void print_hex_array(unsigned char *char_array, size_t array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		printf("%02X", char_array[i]);
	}
}

int main()
{
	for (int i = 0; i < bytes_size; i++)
	{
		printf("%02X\n", bytes[i]);
	}

	int sequence_index = find_sequence_index(bytes, bytes_size, sequence, sequence_size);

	if (sequence_index < 0)
	{

		cout << "Sequence not found" << endl;
		return 0;
	}
	printf("sequence ");
	print_hex_array(sequence, 2);
	cout << " == ";
	print_hex_array(&bytes[sequence_index], 2);
	cout << " @ " << sequence_index << endl;
	return 0;
}