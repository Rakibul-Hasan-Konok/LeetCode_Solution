class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;

        map<char, int> mp1, mp2;
        set<char> set1, set2;
        vector<int> v1, v2;

        for (auto u : word1) {
            mp1[u]++;
            set1.insert(u);
        }

        for (auto u : word2) {
            mp2[u]++;
            set2.insert(u);
        }

        for (auto u : mp1) {
            v1.push_back(u.second);
        }

        for (auto u : mp2) {
            v2.push_back(u.second);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        return (set1 == set2) && (v1 == v2);
    }
};
