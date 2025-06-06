class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int left = 0, zeros = 0, maxLen = 0;

        for (int i= 0; i < nums.size(); i++) {
            if (nums[i] == 0) zeros++;
            while (zeros > 1) {
                if (nums[left] == 0) zeros--;
                left++;
            }

            maxLen = max(maxLen, i - left + 1);
        }

        return maxLen-1;
   

    }
};