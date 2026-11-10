class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0;
        int ans=0;
        int l=0;
        unordered_map<char,int> map;
        while(r<s.size()){
            map[s[r]]++;
          
            while(map[s[r]]>1){
                map[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
              r++;
        }
      
       return ans;
    }
};