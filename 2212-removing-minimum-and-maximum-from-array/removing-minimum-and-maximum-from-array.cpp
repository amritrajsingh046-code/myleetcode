class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int minidx=find(nums.begin(),nums.end(),temp[0])-nums.begin();
        int maxidx=find(nums.begin(),nums.end(),temp[temp.size()-1])-nums.begin();
       
       
            int n= max(minidx,maxidx)+1;
        
        
          int m= nums.size()-min(minidx,maxidx);
       
           int both = min(minidx, maxidx) + 1
         + nums.size() - max(minidx, maxidx);
       return min({n,m,both});
    }
};