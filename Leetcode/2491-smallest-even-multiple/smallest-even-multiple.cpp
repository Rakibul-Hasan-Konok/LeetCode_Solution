class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=n;
        if(n%2==0) return n;
        else i++;
        while(1){
             if(i%n==0) return i;
             i+=2;
        }
        return -1;
    }
};