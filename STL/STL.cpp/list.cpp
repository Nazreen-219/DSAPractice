#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> ls = {1 ,2,3}; //we can push from back and front as well

    ls.push_back(4);
    ls.push_front(5);

    for(int val : ls){
        cout<<val<<" ";
    }

    return 0 ;
}

// as it doubly linked list , so we can also push or pop from front
