class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        vector<string> result;
        string current;
        function<void(int)> backtrack = [&](int i) {
            if (i == digits.size()) {
                result.push_back(current);
                return;
            }
            for (char c : mapping[digits[i] - '0']) {
                current.push_back(c);
                backtrack(i + 1);
                current.pop_back();
            }
        };
        backtrack(0);
        return result;
    }
};
