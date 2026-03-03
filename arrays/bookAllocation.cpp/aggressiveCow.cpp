#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr , int n , int c , int minDis){
    int cow = 1;
    int first = arr[0];
    for(int i = 0 ;  i<n ; i++){
        if(arr[i+1]-arr[i] >= minDis){
            
        }
    }
}

int stallAllocation(vector<int> &arr , int n , int c){
 int st = 1 ;
 int end = arr[n-1] - arr[0];

 while(st<= end){
    int mid = st + (end-st)/2;
    int ans = 1;
    if(isValid(arr , n , c , mid)){
        ans = mid;
        st = mid+1;
        
    }else{
        end = mid-1;

    }
 }

}

int main(){
    vector<int>arr = {1 ,2,8 , 4, 9};
    int n = arr.size();
    int c = 3;

    int result = stallAllocation(arr ,  n ,  c);

}
