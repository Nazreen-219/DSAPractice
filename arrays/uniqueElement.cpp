
// program to print all the unique values in an array
#include<iostream>
using namespace std;

void uniqueValue(int arr[] , int size){
  for(int i =0 ; i< size ; i++){
    int count = 0;
    arr[i];
    for(int k =0 ; k<size ; k++){
        if(arr[i]==arr[k]){
            count++;
        }
    }

    if(count == 1){
        cout<<arr[i]<<" " ;
    }
  }
}

int main(){
    int arr[10] = {3,4,5,6,2,3,4,7,8,7};
    int size = 10;

    uniqueValue(arr , size);

    return 0;
}