class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        /*
        00 01 02
        10 11 12
        20 21 22
        */
        int sum = 0;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i < n; i++ ){
            for(int j = 0 ; j < m ; j++){
                if((i == j) || (i+j == m - 1)){
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};