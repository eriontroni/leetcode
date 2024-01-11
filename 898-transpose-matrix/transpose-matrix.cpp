class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        const int n = matrix.size();
        const int m = matrix[0].size();

        vector<vector<int>> matricaere(m, vector<int>(n, 0));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                matricaere[j][i] = matrix[i][j];
            }
        }

        return matricaere;
    }
};