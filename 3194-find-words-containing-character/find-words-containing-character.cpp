class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> rez;
        int n = words.size();
        for(int i = 0; i < n; i++ ){
            int m = words[i].size();
            for(int j = 0; j < m; j++){
                if(words[i][j] == x){
                    rez.push_back(i);
                    break;
                }
            }

        }
        return rez;
    }
};