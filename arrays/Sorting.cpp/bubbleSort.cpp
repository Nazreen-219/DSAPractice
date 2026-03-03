#include<iostream>
#include<vector>
using namespace std;

void sorting(vector<int>&arr , int n ){

  for(int i =0 ; i<n ; i++){
    bool isSwap = false;
    for(int j =0 ; j<n-i-1 ; j++){
        if(arr[j+1] < arr[j]){
          swap(arr[j] , arr[j+1]);
          isSwap = true;
        }
    }
     if(!isSwap){ //array is already sorted
        return ;
    }
  }

       
}

int main(){
    vector<int>arr = {4 , 1 , 5 , 2, 3};
    int n = arr.size();
     
    sorting(arr , n);

    for(int i =0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    
}