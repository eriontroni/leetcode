class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int sh1 = 0;
        int n = mat.size();
        int m = mat[0].size();
        int max = 0;
        int indeksi = 0;
        for(int i = 0; i < n; i++){
            sh1 = 0;
            for(int j = 0; j < m ; j++){
                if(mat[i][j]== 1){
                    sh1++;
                }
            }
            if(sh1 > max){
            max = sh1;
            indeksi = i;
            }
            }
        return { indeksi , max };
    }
};