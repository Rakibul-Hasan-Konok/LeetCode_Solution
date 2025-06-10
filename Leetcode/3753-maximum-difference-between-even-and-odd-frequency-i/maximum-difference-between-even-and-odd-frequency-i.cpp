class Solution {
public:
    int maxDifference(string s) {
        map<char,int>freQ;
        for(char u: s) freQ[u]++;
        int oddFreq=1,evenFreq=s.size();
        for(auto u: freQ){
            if(u.second%2!=0) oddFreq=max(u.second,oddFreq);
            else evenFreq=min(u.second,evenFreq);
        }
        return (oddFreq-evenFreq);
    }
};