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
    int k1 = 100;
    int k2 = 100;
    vector<int> v = generate_random_vector<int>(10, -50, 50);
    for(int i=0; i<v.size(); ++i){
        if (v[i]<0){
            k1 = i;
            break;
        }
    }
    for(int i=0; i<v.size(); ++i){
        if (v[i]%2==0){
            k2 = i;
        }
    }
    for(int i=0; i<v.size(); ++i){
        if (i==k1 or i==k2){
            continue;
        } else {
            cout << v[i] << " ";
        }
    }
}