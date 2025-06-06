class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,mxOne=0;
        for(auto u: nums){
            if(u==1) {count++; mxOne=max(count,mxOne);}
            else count=0;
        }
        return mxOne;
    }
};