class Solution(object):
    def differenceOfSums(self, n, m):
        sumN=0;
        sumM=0;
        for i in range(1,n+1,1):
            if i%m==0 :
                 sumM+=i;
            else :
                sumN+=i;
        return sumN-sumM;

        