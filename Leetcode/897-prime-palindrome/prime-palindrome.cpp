class Solution {
public:
    bool isPrime(int x) {
        if (x < 2) return false;
        if (x % 2 == 0) return x == 2;
        for (long long i = 3; i * i <= x; i += 2) {
            if (x % i == 0) return false;
        }
        return true;
    }

    int primePalindrome(int n) {
        if (n <= 2) return 2;
        if (n <= 3) return 3;
        if (n <= 5) return 5;
        if (n <= 7) return 7;
        if (n <= 11) return 11;

        for (int len = 1; len <= 6; ++len) {
            int start = pow(10, len - 1);
            int end = pow(10, len);
            for (int half = start; half < end; ++half) {
                string s = to_string(half);
                string rs(s.rbegin() + 1, s.rend());
                int pal = stoi(s + rs);
                if (pal >= n && isPrime(pal)) return pal;
            }
        }
        return -1;
    }
};
