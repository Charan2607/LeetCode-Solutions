class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ans+=1;
            }
            else 
                ans = 0;
            cnt = max(ans,cnt);
        }
        return cnt;
    }
};