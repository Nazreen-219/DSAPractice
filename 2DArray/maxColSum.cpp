#include<iostream>
#include <climits>
using namespace std;

int maxSum(int matrix[][3] , int row , int col){
    int maxColSum = INT_MIN;
   
    for(int i =0 ;i < col ; i++){
        int ColSum = 0;
        for(int j =0 ; j< row; j++){
            ColSum += matrix[j][i];
        }
        maxColSum = max(maxColSum , ColSum);
    }
    return maxColSum;
};
int main(){
    int matrix[3][3] = {{1 ,2 ,3 } , { 4 ,5 ,3} , {6  , 7,9}};
    int row = 3;
    int col = 3;

    int sum = maxSum(matrix , row , col);
    cout<<sum;
    
    return 0;
}