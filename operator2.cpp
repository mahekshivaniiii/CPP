#include<iostream>

using namespace std ;

int main() {
    int exp1 =  true ;
    int exp2 =  false ;

    cout << (exp1&&exp2) <<endl; //false 0
    cout << (exp1||exp2) <<endl; //true1
    cout <<(!exp1) <<endl; //false 0
    cout << (!exp2) << endl; //true 1

    return 0;
}