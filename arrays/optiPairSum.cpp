#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(  const vector<int> vec , int target){
  int st = 0 ;
  int end = 3;
  vector<int> ans;
  while(st<end){
    int pairSum = vec[st] + vec[end] ;
    if(pairSum > target){
       end--;
    }
    else if(pairSum< target){
        st++;
    }
    else if(pairSum== target){
      ans.push_back(vec[st]);
      ans.push_back(vec[end]);
      
      return ans;
    }
  }

}

int main(){
    vector<int> vec = {2 , 7, 11 , 15};
    int target = 9;

    vector<int> ans = pairSum(vec , target );

    cout<<ans[0]<<" , "<<ans[1];

    return 0 ;
}