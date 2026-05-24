// #include<bits/stdc++.h>
// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> arr;
//         int m = matrix.size(0);
//         int n = matrix[0].size(0);
//         int srow = 0;
//         int scol = 0;
//         int erow = m-1;
//         int ecol = n-1;
//         while(srow<erow && scol<ecol){
//             for(int i = scol ; i<= ecol; i++){
//                 arr.push_back(matrix[srow][i]);
//             }
//             for(int j = srow+1 ; j<=erow ; j++){
//                 arr.push_back(matrix[j][ecol]);
//             }
//             for(int i = ecol-1 ; i<= scol; i--){
//                 arr.push_back(matrix[srow][i]);
//             }
//             for(int j = erow-1 ; j<=srow+1; j--){
//                 arr.push_back(matrix[j][ecol]);
//             }

//         }
//         return arr;
// }
// int main(){


    
//     return 0;
// }