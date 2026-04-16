#include<iostream>
#include <climits>
using namespace std;

int diagonalSum(int matrix[][3] , int n){
   int sum = 0;
   for(int i =0 ; i< n ; i++){
    sum += matrix[i][i];

    if(i != n-i-1){
        sum += matrix[i][n-i-1];
    }
   }   
   return sum;
}
int main(){
    int matrix[3][3] = {{1,2,3} , { 4 ,5 ,6} , { 3 ,6,7}};
    int n = 3;
    int sum = diagonalSum(matrix, n);
    
    cout<<sum;
    return 0;
}