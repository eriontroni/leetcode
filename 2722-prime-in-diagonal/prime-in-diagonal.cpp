class Solution {
public:
    bool ithjeshte(int numri) {
        if (numri <= 1) return false;
        if (numri == 2) return true;
        if (numri % 2 == 0) return false;
        for (int i = 3; i * i <= numri; i += 2) {
            if (numri % i == 0){
                 return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        const int n = nums.size();
        const int m = nums[0].size();
        long long max = 0;
        for(long int i = 0; i < n ; i++){
            for(long int j = 0; j < m ; j++){
                if((i == j) || (i + j  == n - 1 )){
                    if(ithjeshte(nums[i][j])){
                        if(max < nums[i][j]){
                            max = nums[i][j];
                        }
                    }
                }
            }
        }
        return max;
    }
};