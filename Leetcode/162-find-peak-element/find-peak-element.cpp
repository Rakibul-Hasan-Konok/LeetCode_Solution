

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      long long int mx=LLONG_MIN,index=-1;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]){
            mx=nums[i];
            index=i;
            } 
        }
        return index;
    }
};