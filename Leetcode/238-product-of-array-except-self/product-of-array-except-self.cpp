class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int ans=1,cnt=0;
        bool isZero=false;
        for(auto u:nums) {
            if(u!=0) ans*=u;
            else{
                isZero=true;
                cnt++;
            }
            }
        vector<int> arr;
        for(auto u:nums){ 
              if (cnt > 1) {
               arr.push_back(0);
            }
           else if(isZero){
              if(u==0) arr.push_back(ans);
              else arr.push_back(0);
           }
           else{
            arr.push_back(ans/u);
        }
    
        }
        return arr;

    }
};