#include <iostream>
using namespace std;


int binarysearch(int arr[], int target, int n ){
  int mid;
  mid = (n/2);
  
  while(mid<n ){ 
    if(arr[mid] < target){
    mid++;
  }else if(arr[mid] > target){
    mid--;
  }else if(arr[mid] == target){
    return mid;
  }}

  return -1;
}

int main(){
     int n ;
     cout <<"enter number of elements"<<endl;
     cin>>n;

    int arr[n];

   
   cout<<"enter" <<n <<"elements to sorted order: \n";
    
    for(int i=0 ; i<n ; i++){
      cin>>arr[i];
    }
    
    int target;
    cout<<"enter target to search"<<endl;
    cin>>target;

    int result = binarysearch(arr, target , n);

    if(result != -1){
        cout<<"position of target element is "<< result<<endl;

    }else if(result == -1){
        cout<<"Element not found"<<endl;
    }

    return 0;
}