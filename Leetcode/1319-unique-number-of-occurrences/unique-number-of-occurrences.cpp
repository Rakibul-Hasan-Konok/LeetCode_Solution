class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto u : arr){
           mp[u]++;
        }
        vector<int> vec;
        set<int> st;
        for(auto u : mp){
            vec.push_back(u.second);
            st.insert(u.second);
        }
         return vec.size()==st.size();
    }
};