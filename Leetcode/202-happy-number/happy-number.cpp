class Solution {
public:
    bool isHappy(int n) {
        set<int> visited;

        while (true) {
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            if (sum == 1) return true;
            if (visited.count(sum)) return false;

            visited.insert(sum);
            n = sum;
        }
    }
};
