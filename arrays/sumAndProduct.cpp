#include<iostream>
using namespace std;

int sumofElements(int arr[] , int size){
  int sum = 0;
  int product = 1;

  for(int i=0 ; i<size ; i++){
    sum += arr[i];
    product *= arr[i];
  }

  cout<<"Sum of elements is "<<sum<<endl;
  cout<<"Product of elements is "<<product<<endl;
}



int main(){
    int arr[5] = {4,6,7,9,3};
    int size = 5;

    int summation = sumofElements(arr , size);
}