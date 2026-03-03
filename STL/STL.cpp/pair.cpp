#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<char, int> p = {'a',2};
    cout<<p.first <<" "<<p.second;
   
    pair<int , pair<char , int>>p2 = {1 , {'a' , 5}};
    cout<<p2.second.first;
   
    return 0;
}