#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

template<class T>
vector<T> generate_random_vector(size_t num, T min = -10, T max = 10)
{
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution<> dist(min, max);

    auto lambda = [&e2, &dist] () -> T { return dist(e2); };

    vector<T> result(num);
    generate_n(result.begin(), num, lambda);
    return result;
}

int main(){
    vector<int> v = generate_random_vector<int>(20, 10, 100);
    cout << v[17] << " " << v[18] << " " << v[19] << " ";
    for(int i=3; i<17; ++i){
        cout << v[i] << " ";
    }
    cout << v[0] << " " << v[1] << " " << v[2];
}