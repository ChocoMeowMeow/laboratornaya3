#include <iostream>
#include <string>
using namespace std;

int main(){
    string st;
    int col = 0;
    cin >> st;
    char a = 'a';
    for(int i=0; i<st.size(); ++i){
        if (st[i] == a){
            col += 1;
        }
    }
    cout << col/float(st.size()) << endl;
}