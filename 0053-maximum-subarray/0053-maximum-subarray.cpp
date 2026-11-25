class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>t(nums.size());
        t[0]=nums[0];
        for(int i=1; i< (nums.size());i++){
            t[i]=max(nums[i],nums[i]+t[i-1]);
        }
        return ranges::max(t);
    }
};