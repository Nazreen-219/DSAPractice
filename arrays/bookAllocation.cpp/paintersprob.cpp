#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr , int n , int m , int maxTime){
    int p =1;
    int unit = 0;
    for(int i = 0 ; i< n ; i++){
        if(arr[i] + unit <= maxTime){
            unit += arr[i];
        }else{
            p++;
            unit = arr[i];
        }

    }

    return p>m? false:true;
}

int painterproblem(vector<int> &arr, int n , int m){
  int sum  =0 ;

  for(int i = 0 ; i< n ; i++){
    sum+= arr[i];
  }
  int ans = 1 ; 
  int st =0 ;
  int end =sum;
   while(st <= end){
    int mid = st + (end -st)/2;

    if(isValid(arr , n , m , mid)){
        ans = mid;
        end = mid-1;
    }else{
        st = mid+1;
    }

   }
   return ans;
}

int main(){
    vector<int> boards = {40 , 30 , 10 ,20};
    int n = boards.size();
    int m = 2;

    int result = painterproblem(boards , n , m);
    cout<<result<<endl;

    return 0 ;
}