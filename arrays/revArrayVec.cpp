#include<iostream>
#include<vector>
using namespace std;

void reverseArray( vector<int> &vec , int size){
  int start = 0 ;
  int end = size -1;
  

  while(start<end){
    swap(vec[start] , vec[end]);
    start++;
    end--;
  }
    for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
    }
    cout << endl;
   
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    int size = vec.size();
    
    reverseArray(vec , size);
   



    return 0 ;
}