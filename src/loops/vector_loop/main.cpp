#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vector_2d;
int row {3};
int col {11};


int main(int argc, char const *argv[])
{
    for (int i {0}; i < row; ++i){
        vector<int> row_vec;
        vector_2d.push_back(row_vec);
        for (int j {0} ; j < col; ++j){
            vector_2d[i].push_back(j);
        }
    }

    for (vector vec : vector_2d){
        for (int el : vec)
            cout << el;
        cout << endl;
    }
    
    return 0;
}
