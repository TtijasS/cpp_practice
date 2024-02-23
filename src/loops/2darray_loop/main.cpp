#include <iostream>
using namespace std;

const int rows{5};
const int colls{15};

int grid[rows][colls]{};

int main(int argc, char const *argv[])
{
    for (int i{0}; i < rows; ++i)
    {
        printf("[%d]", i);
        for (int j{0}; j < colls; ++j)
        {
            if (!i)
            {
                printf(" [%d]", j);
            }else{
                grid[i][j] = j;
                printf(" %d |", j);
            }
        }
        cout << endl;
    }

    return 0;
}
