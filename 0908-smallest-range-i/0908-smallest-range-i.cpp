class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        auto maxi = max_element(nums.begin(),nums.end());
        auto mini = min_element(nums.begin(),nums.end());
        
        int high = *maxi-k;
        int low  = *mini+k;
        if(high>low)
        return high-low;
        else 
        return 0;

    }
};