#include<iostream>
#include<stack>
#include<vector>
#include<list>

using namespace std;

int main(){
  stack<int> s;

  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout<<s.top() <<endl;
//   for(int val : s){
//     cout<<
//   }

// Why not for loop?
// Because std::stack does not provide indexing like arrays.

while(!s.empty()){
 cout<<s.top();
 s.pop();
}

return 0;
}