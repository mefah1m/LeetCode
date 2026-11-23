class Solution {
public:
    char findTheDifference(string s, string t) {
      int m= s.size();
      int n= t.size();
      char rest= NULL;
      for(int i=0; i<m; i++){
        rest^=s[i];
      }  
      for(int j=0; j<n; j++){
        rest^=t[j];
      }
      return rest;
    }
};