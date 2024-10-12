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

int main()
{
    int sum;
    int sumkv;
    int sum6;
    vector<int> v = generate_random_vector<int>(10, 10, 100);
    for(int i=0; i<v.size(); ++i){
        sum += v.at(i);
        sumkv += (v.at(i)*v.at(i));
    }
    for(int i=0; i<6; ++i){
        sum6 += v[i];
    }
    
    
    int k1;
    int k2;
    int sumk1k2;
    cin >> k1;
    cin >> k2;
    for(int i=k1; i<=k2; ++i){
        sumk1k2 += v[i];
    }
    int sr1 = sum/10;
    
    
    int s1;
    int s2;
    int sums1s2;
    cin >> s1;
    cin >> s2;
    for(int i=s1; i<=s2; ++i){
        sums1s2 += v[i];
    }
    int sr2 = sums1s2/(s2-s1+1);
    
    cout << sum << endl;
    cout << sumkv << endl;
    cout << sum6 << endl;
    cout << sumk1k2 << endl;
    cout << sr1 << endl;
    cout << sr2 << endl;
}