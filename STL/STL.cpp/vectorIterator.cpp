#include<iostream>
#include<vector>  
using namespace std;

int main(){
    vector<int> vec;
    for(int i = 1 ; i<=5 ; i++){
        vec.push_back(i);
    }

    vec.begin(); //return location of first element of vector
    vec.end(); //return location of last element of vector + 1

    // we will use dereference operator to get element at that location
    
    cout<<"vec.begin"<<*(vec.begin())<<endl;

     vector<int>:: iterator it;
     for(it = vec.begin() ; it != vec.end() ; it++){
        cout<<*(it)<<" ";
     } 
     cout<<endl;

    //  to reverse vector

    for(auto it = vec.rbegin() ; it!= vec.rend() ;it++){
        cout<<*(it)<<" ";
    }


}