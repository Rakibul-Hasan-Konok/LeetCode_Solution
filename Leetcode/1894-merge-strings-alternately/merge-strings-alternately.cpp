// class Solution {
// public:
//     string mergeAlternately(string s1, string s2) {
//         string result;
//         while (!s1.empty() && !s2.empty()) {
//             result += s1[0];
//             result += s2[0];
//             s1.erase(s1.begin());
//             s2.erase(s2.begin());
//         }
    
//         if (!s1.empty()) {
//             result += s1;
//         } else if (!s2.empty()) {
//             result += s2;
//         }

//         return result;
//     }
// };
class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string result;
        int i = 0, j = 0;

        // Merge characters alternately from both strings
        while (i < s1.size() && j < s2.size()) {
            result += s1[i++];
            result += s2[j++];
        }

        // Append the remaining characters from s1 or s2
        if (i < s1.size()) {
            result += s1.substr(i);
        } else if (j < s2.size()) {
            result += s2.substr(j);
        }

        return result;
    }
};