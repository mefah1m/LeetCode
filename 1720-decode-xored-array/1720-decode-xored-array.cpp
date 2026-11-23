class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n= encoded.size();
        vector<int> arr(n+1);
        arr[0]=first;
        for(int i=0; i<n-1; i++ ){
                arr[i+1]= arr[i]^encoded[i];
            }
            arr[n]= arr[n-1] ^ encoded[n-1];
             return arr;
    }
    
};