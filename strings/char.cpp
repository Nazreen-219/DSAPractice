#include<iostream>
#include <cstring> 
using namespace std;

int main(){
    char str[] = {'a' , 'b' , 'c' , 'd' ,'\0'};
    //to see size 
    cout<<strlen(str)<<endl;
    cout<<str<<endl; //all char will concatenate 

    string str2 = "hello World "; //string literals
    cout<<str2; 
    // so we use 
   
    char str3[100];

    cout<<"enter char array: ";
    cin.getline(str , 100 ,'$'); //delimeter 

    cout<<"ouput "<<str<<endl;
   

    return 0;
}