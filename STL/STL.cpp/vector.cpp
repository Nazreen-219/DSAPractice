#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vector<int>vec2(vec);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.erase(vec.begin()+2); //tc = O(n) as all the elements after the erased element have to be shifted to left
    vec.insert(vec.begin()+2,10); //insert 10 at index 2
    cout<<vec.size() <<" "<<vec.capacity()<<endl;

    cout<<vec.front()<<" "<<vec.back()<<endl; //front() return the first element of the vector and back() return the last element of the vector

    vec.clear(); //clear the vector but does not change the capacity

    for(int val:vec){
        cout<<val<<" ";
    }
    
    if(vec.empty()){ //check if vector is empty or not
        cout<<"vector is empty"<<endl;
    }
    vec.emplace_back(6); //emplace_back is faster than push_back as it constructs the element in place
    // push_back expect data of same type as vector but emplace_back can take different type of data and construct the element in place
    return 0;
}