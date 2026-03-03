// Brut force Approach -> time complexity = O(n^2)
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(const vector<int> vec, int target){
 int n = 5;
 vector<int> ans;
  for(int i =0 ; i<n ; i++){
    for(int j = i+1 ; j<n ; j++){
        if(vec[i]+vec[j] == target ){
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
        }

    }
 }
}

int main(){
 vector<int> vec  = {2,3,5,11,15};
 int n = 5;
 int target = 8;

   vector<int> result = pairSum(vec , target);
   cout<< result[0]<<" ,"<<result[1];

   return 0;
}

