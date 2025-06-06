class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0,maxAltitude=0;
        for(auto u: gain){
            ans+=u;
            maxAltitude=max(ans,maxAltitude);
        }
        return maxAltitude>0 ? maxAltitude : 0;
    }
};