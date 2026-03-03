#include<iostream>
#include<vector>
using namespace std;

int linearSearch(const vector<int> vec , int target){
for(int i= 0; i< vec.size() ; i++){
    if(vec[i] == target){
        return i;
    }
}
   
}

int main(){
    vector <int> vec ={1,2,3,5,7};
    int target = 3;

    int result = linearSearch(vec , target);

    cout<<"position of target element is "<<result + 1<<endl;
    
    return 0;

}