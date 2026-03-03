#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;
bool camparator(pair<int , int>p1 , pair<int , int >p2){ 
    if(p1.second<p2.second) return true;
    else if(p1.second>p2.second) return false;

    if(p1.first< p2.first) return true;
    else return false;

}
int main(){
    vector<pair<int , int>> vec= {{1,2} , {3, 1} , {4, 2} , {1 , 4}};

    sort(vec.begin() , vec.end() , camparator  ); //by defualt it will sort on the basis of first value
   
    for(auto val:vec){
        cout<<val.first <<" " <<val.second<<endl;
    }

    //sorting on the basis of second value
    // custom comparator we made 

    return 0;
}