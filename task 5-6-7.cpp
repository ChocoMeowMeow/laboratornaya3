#include <iostream>
#include <string>
using namespace std;

int main(){
    string st;
    cin >> st;
    if (st.size()%2==0){
        cout << "Четно" << endl;
    } else {
        cout << "Нечетно" << endl;
    }
    
    string f1;
    string f2;
    cin >> f1;
    cin >> f2;
    if (f1.size() > f2.size()){
        cout << "Фамилия " << f1 << " длиннее" << endl;
    } else if (f1.size() < f2.size()){
        cout << "Фамилия " << f2 << " длиннее" << endl;
    } else{
        cout << "Длина фамилий равна" << endl;
    }
    
    string a;
    string b;
    string c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a<=b & b<=c){
       cout << "Наименьшее - " << a << ". Наибольшее - " << c << endl;
    } else if (a<=c & c<=b){
       cout << "Наименьшее - " << a << ". Наибольшее - " << b << endl;
    } else if (b<=c & c<=a){
       cout << "Наименьшее - " << b << ". Наибольшее - " << a << endl;
    } else if (b<=a & a<=c){
       cout << "Наименьшее - " << b << ". Наибольшее - " << c << endl;
    } else if (c<=a & a<=b){
       cout << "Наименьшее - " << c << ". Наибольшее - " << b << endl;
    } else if (c<=b & b<=a){
       cout << "Наименьшее - " << c << ". Наибольшее - " << a << endl;
    }
    
}



