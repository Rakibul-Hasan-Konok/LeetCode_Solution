class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        for (auto u : arr) {
            mp[u]++;
        }

        set<int> st;
        for (auto u : mp) {
            st.insert(u.second);
        }

        return mp.size() == st.size();
    }
};
