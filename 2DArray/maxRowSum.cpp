#include<iostream>
#include <climits>
using namespace std;

int maxSum(int matrix[][3] , int row , int col){
    int maxRowSum = INT_MIN;
   
    for(int i =0 ;i < row ; i++){
        int RowSum = 0;
        for(int j =0 ; j<col; j++){
            RowSum += matrix[i][j];
        }
        maxRowSum = max(maxRowSum , RowSum);
    }
    return maxRowSum;
};
int main(){
    int matrix[3][3];
    int row = 3;
    int col = 3;

}