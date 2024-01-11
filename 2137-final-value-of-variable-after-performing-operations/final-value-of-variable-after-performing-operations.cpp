class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int rez = 0;
        int n = operations.size();
        for(int i = 0; i < n; i++){
            int m = operations[i].size();
            for(int j = 0; j < m ; j++){
                if(operations[i][j]=='+'){
                    rez++;
                    break;
                }else if(operations[i][j]== '-') {
                    rez--;
                    break;
                }
            }    
        }
        return rez;
    }
};