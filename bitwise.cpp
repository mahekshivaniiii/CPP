#include<iostream>
using namespace std ;

int main() {
    int num1 =5 ;
    int num2 = 16 ;

    cout << (num1 >> 2) <<endl; // right shift
    cout << (num2 << 2) <<endl;  //left shift 
    cout << (num1&num2) <<endl; //0
    cout << (num1|num2) <<endl; //21
    cout << (num1 ^ num2) <<endl; //21
    cout << (~num1) <<endl; //2
    return 0 ;
}