class Solution {
public:
    int commonFactors(int a, int b) {
       int count=1;
        vector<int> a1 ;
    vector<int> b1 ;
    for(int i=1;i*i<=a;i++){
        if(a%i==0) {
            a1.push_back(i);
            if((a/i)!=i) a1.push_back(a/i);
        }
    }
      for(int i=1;i*i<=b;i++){
        if(b%i==0) {
            b1.push_back(i);
            if((b/i)!=i) b1.push_back(b/i);
        }
    }
    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());
    
    vector<int> common;
    set_intersection(a1.begin(), a1.end(), b1.begin(), b1.end(), back_inserter(common));
     
     return common.size();

    }
};