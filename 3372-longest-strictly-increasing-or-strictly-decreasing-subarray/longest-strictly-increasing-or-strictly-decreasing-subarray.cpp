class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=0;
        int maxi=1;
        int dec=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                inc++;
            }else{
                inc=0;
                }
                if(nums[i]>nums[i+1]){
                dec++;
            }else{
                dec=0;
            }
            
            maxi=max(max(inc,dec)+1,maxi);
        }
        return maxi;
    }
};