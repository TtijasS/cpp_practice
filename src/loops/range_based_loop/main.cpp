#include <iostream>
using namespace std;

int numbers[] = {1, 2, 3, 4, 5};

int main(int argc, char *argv[])
{
	for (int element : numbers)
	{
		cout << element << endl;
	}

	return 0;
}