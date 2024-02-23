#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec {1,2};
    int vec_size = vec.size();

    int sum_of_products {0};
    for(int i {0}; i < vec_size; ++i){
        for (int j {i+1}; j < vec_size ; ++j){
            sum_of_products += vec[i]*vec[j];
            printf("%d * %d", vec[i], vec[j]);
            cout << endl;
        }
    }
    cout << "Result: " << sum_of_products;
    return 0;
}
