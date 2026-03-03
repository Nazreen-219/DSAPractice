// Maximum subarray Sum 
//  subarray -> is a continous part of a array and part should be continous 
     
#include<iostream>
using namespace std;

int main(){
  int arr[5]  = {1,2,3,4,5};
  int length = sizeof(arr)/sizeof(int);
  // cout<<length;

  int start = 0;
  int end = length-1;
  for(start=0 ; start < length ; start++){
     for(end = start ; end<length ; end++){
        for (int i = start ; i<=end ; i++){
            cout<<arr[i];
        }
       cout<<" ";

     }
     cout<<endl;
   }

   return 0 ;
     
}
