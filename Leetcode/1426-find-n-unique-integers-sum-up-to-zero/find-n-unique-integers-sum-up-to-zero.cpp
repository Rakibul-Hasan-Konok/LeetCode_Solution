class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        int cnt=n;
        while(n>1){
            arr.push_back(n);
            arr.push_back(-n);
            n=n-2;
        }
        if(arr.size()!=cnt) arr.push_back(0);
        return arr;

    }
};