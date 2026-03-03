// mam's method 
#include<iostream>
using namespace std;

int main(){
    int decimalNum = 45;
    int binary = 0;
    int power = 1;

    while(decimalNum >0){
        int rem = decimalNum % 2;
        binary += rem *power;
        
        power *= 10;
        decimalNum = decimalNum /2;

    }

    cout<<(binary)<<endl;

    return 0;
}