#include<iostream>
using namespace std;

void intersection(int arr1[] , int arr2[] ,int size){
   for(int i =0 ; i < size ; i++){
    arr1[i] ;
    for(int k =0 ; k <size ;  k++){
     if(arr1[i] == arr2[k]){
        cout<<arr1[i] <<" ";
     }
    }
   }
}

int main(){
    int arr1[5] = {2,3,4,5,7};
    int arr2[5] = {3,4,8,5,9};

    int size = 5;

    intersection(arr1 , arr2 , size);

    return 0;
}