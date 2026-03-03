// app1 -> do for loop use karo i != j hoga tabhi product krna 
// app2 - > pure elements product nikal lo then jis element ko exclude krna hai usse divide kardo

#include<iostream>
using namespace std;

void productArray(int arr[] , int prod , int n){
  for(int i =0 ; i< n ; i++){
    arr[i] = prod/arr[i];
    cout<<arr[i] <<" ";
  }
}

int main(){
    int arr[5] = {1 , 2, 4, 5 ,8};
    int n = 5;
    int prod = 1;
    for(int i =0 ; i <n ; i++){
       prod *= arr[i];
    }

    productArray(arr , prod ,  n);

    
    
    return 0;
}