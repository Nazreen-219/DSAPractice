#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string , int> m;

    m.emplace("tv" , 100); //we cannot use square bracket in mulitmap
    m.emplace("tv" , 100); //we cannot use square bracket in mulitmap
    m.emplace("tv" , 100); //we cannot use square bracket in mulitmap
    m.emplace("tv" , 100); //we cannot use square bracket in mulitmap
    
    //in normal map only ek baar hi tv print hota 
     m.erase(m.find("tv"));
    for(auto p : m){
        cout<<p.first <<" "<<p.second<<endl;
    }
    
   
    return 0;
}