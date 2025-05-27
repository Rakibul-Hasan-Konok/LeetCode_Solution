class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumN=0,sumM=0;
        for(int i=1;i<=n;i++){
           if(i%m!=0) sumN+=i; 
           else sumM+=i;
        }
        return (sumN-sumM);
        
    }
};