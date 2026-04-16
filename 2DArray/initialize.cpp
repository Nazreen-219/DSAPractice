#include <iostream>
#include <utility>
using namespace std;

pair<int, int> findKey(int matrix[4][3], int row, int col, int key) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == key) {
                return {i, j};   // return row and col as pair
            }
        }
    }
    return {-1, -1};   // if key not found
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int row = 4;
    int col = 3;
    int key = 8;

    pair<int, int> ans = findKey(matrix, row, col, key);

    if (ans.first != -1) {
        cout << "row " << ans.first << " and col " << ans.second;
    } else {
        cout << "Key not found";
    }

    return 0;
}