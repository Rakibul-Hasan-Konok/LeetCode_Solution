class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int index = INT_MAX; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= first) {
                first = nums[i]; 
            } else if (nums[i] <= index) {
                index = nums[i]; 
            } else {
                return true;
            }
        }

        return false;
    }
};
