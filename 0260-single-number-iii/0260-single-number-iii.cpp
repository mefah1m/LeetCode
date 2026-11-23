class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long int xor_all = 0;
        
    for (int n : nums) xor_all ^= n; 

    long long int bit = xor_all & -xor_all;        

    int x = 0, y = 0;
    for (int n : nums) {
        if (n & bit) x ^= n;             
        else         y ^= n;             
    }
    vector<int>rest(2);
    rest[0]=x;
    rest[1]=y;
    return rest;
    }
    
};