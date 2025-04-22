class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_set<char> charSet;
            int sz = 0;
            for (int j = i; j < s.size(); j++) {
                if (charSet.find(s[j]) == charSet.end()) {
                    charSet.insert(s[j]);
                    continue;
                }
                sz = charSet.size();
                break;
            }
            sz = max(sz, (int)charSet.size());
            res = max(res, sz);
        }
        return res;
    }
};
