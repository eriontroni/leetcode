class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int gj1 = word1.size();
        string fjala1;
        int gj2 = word2.size();
        string fjala2;
        bool rez = false;
        for(int i = 0; i < gj1;i++){
            fjala1 += word1[i];
        }
        for(int i = 0; i < gj2;i++){
            fjala2 += word2[i];
        }
        if(fjala1 == fjala2){
            rez = true;
        }
        return rez;
    }
};