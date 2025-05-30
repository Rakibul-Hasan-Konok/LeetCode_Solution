class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int index = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        if (index == letters.size()) {
            return letters[0];
        }
        return letters[index];
    }
};