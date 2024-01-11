class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int temp;
        int n = image.size();
        int m = image[0].size();
         for(int i = 0; i < n ;i++){
            for( int j = 0; j < m ; j++){
                if(image[i][j] == 1){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
            }
        }
        for(int i = 0; i < n ; i++){   
            int fillimi = 0;
            int mbarimi = m - 1;
            while (fillimi < mbarimi) {
                int temp = image[i][fillimi];
                image[i][fillimi] = image[i][mbarimi];
                image[i][mbarimi] = temp;
                fillimi++;
                mbarimi--;
            }
        }    
        return image;
    }

};