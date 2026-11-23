class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int rest=0;
        for(int i=0;i<n; i++){
                arr[i]=start +2 * i;
                rest^=arr[i];
        }
         return rest;
    }
};