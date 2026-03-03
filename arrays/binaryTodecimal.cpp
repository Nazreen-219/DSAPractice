#include<iostream>
using namespace std;

int main(){
    int decimalNum = 45;
     while(decimalNum>0){
        int remainder = decimalNum % 2;
        cout<<remainder;
        int quotient = decimalNum / 2;
        decimalNum = quotient;
        
     }

     return 0;

}