#include <iostream>
#include <string>
using namespace std;

int main(){
    string st = "Can you can a can as a canner can can a can?";
    string a;
    cin >> a;
    for(int i=0; i<st.size(); ++i){
        if ((st[i]=='C' | st[i]=='c' ) & st[i+1]=='a' & st[i+2]=='n'){
            cout << a;
            i += 2;
        } else{
            cout << st[i];
        }
    }
    
}