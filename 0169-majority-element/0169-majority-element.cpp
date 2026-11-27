class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=nums.size();
        int p=1;
        for(int i=0; i<m-1;i++){
            if(nums[i]==nums[i+1]){
                p++;
                if(p>(m/2)){
                    return nums[i];
                }
            }
            else{
                p=1;
            }
        }
            return nums[0];
    }

};