class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int actual=0;
        for(int i=0;i<n;i++){
            actual+=nums[i];
        }
        
        int ans = (n*(n+1))/2;
        return ans-actual;
    }
};