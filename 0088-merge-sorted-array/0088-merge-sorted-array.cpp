class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int l=m+n;
         vector<int>t(l);
        for(int i=0;i<l;i++){
            if(i<m){
                t[i]=nums1[i];
            }
            else if(i>=m){
                t[i]=nums2[i-m];
            }
        }
        
        sort(t.begin(),t.end());
        nums1=t;
    }
};