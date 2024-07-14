#include<iostream>
using namespace std;

int main () {

    int num1;
    int num2 ;
    int swap;
    cin >> num1 ;
    cin >> num2 ;
    cout << " before swap a  " << num1 ;
    cout << " before swap  b " << num2 << endl ;
    swap  =  num1 ;
    num1 =  num2 ;
    num2 =  swap ;
    cout << " after swap  " << num1 ;
    cout << " after swap  " <<num2 ;


    return 0;
}