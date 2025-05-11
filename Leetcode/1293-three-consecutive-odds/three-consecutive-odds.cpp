class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]%2!=0 && arr[i]%2!=0) {
                if(ans==2) {
                    return true;
                }
                ans++;
            }
            else{
                ans=1;
            }
            


        }
        return false;
    }
};