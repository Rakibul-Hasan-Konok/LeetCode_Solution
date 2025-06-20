class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> sMap,tMap;

        for (int i = 0; i < (int)s.size(); i++) {
            char cs = s[i];
            char ct = t[i];
            if (sMap.count(cs) && sMap[cs] != ct) return false;

            if (tMap.count(ct) && tMap[ct] != cs) return false;
            sMap[cs] = ct;
            tMap[ct] = cs;
        }
        return true;
    }
};
