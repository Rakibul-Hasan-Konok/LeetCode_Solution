class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0, maxCount = 0;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < k; ++i) {
            if (vowels.find(s[i]) != vowels.end()) count++;
        }
        maxCount = count;

        for (int i = k; i < s.size(); ++i) {
            if (vowels.find(s[i]) != vowels.end()) count++;
            if (vowels.find(s[i - k]) != vowels.end()) count--;
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};
