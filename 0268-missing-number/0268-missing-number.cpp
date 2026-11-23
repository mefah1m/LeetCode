class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            a+=nums[i];
        }
        for(int j=0;j<=n;j++){
            b+=j;
        }
        return b-a;
    }
};