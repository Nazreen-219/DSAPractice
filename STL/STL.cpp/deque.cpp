#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq = {1 , 2, 3, 4};
    // similar to list but random access possible 
    
    cout<< dq[2]; //can't list[3]

    return 0 ;

}

// list -> is internally doubly linked list
// but deque - implement with help of  dynamic array and since yaha array aa gya so we random access is posssible
 