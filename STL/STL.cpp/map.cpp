#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string , int> m;
   
    m["tv"] = 100;
    m["laptop"] = 10;
    m["Android"] = 1000;

    for(auto p : m){
        cout<<p.first<<" " <<p.second<<endl; 
    }
    
    cout<<"count of laptop named key ="<<m.count("laptop");
    
    return 0 ;


}