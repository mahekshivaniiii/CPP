#include<iostream>
using namespace std ;
int main(){
    int num1 = 3 ;
    int num2 = 3 ;

    cout << num1+num2 <<endl; //6
    cout <<  num1-num2 <<endl; //0
    cout << num1*num2 << endl; //9
    cout << num1/num2 <<endl; //1
    cout << num1%num2 <<endl; //0


    cout << (num1==num2) <<endl; // true 1
    cout << (num1!=num2) <<endl; //false 0
    cout << (num1 <=num2) <<endl; //true 1


    num1 += 1;
    num2 -=3;
    cout <<num1<<endl;
    cout << num2 <<endl;


    return 0;
}