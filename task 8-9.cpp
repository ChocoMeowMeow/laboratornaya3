#include <iostream>
#include <string>
using namespace std;

int main(){
    int m;
    int n;
    string st;
    cin >> st;
    cin >> m;
    cin >> n;
    for (int i=(m-1); i<n; ++i){
        cout << st[i];
    }
    
    cout << " " << endl;
    string stt;
    cin >> stt;
    for (int i=0; i<stt.size(); ++i){
        cout << "*";
    }
    cout << stt;
    for (int i=0; i<stt.size(); ++i){
        cout << "*";
    }
}