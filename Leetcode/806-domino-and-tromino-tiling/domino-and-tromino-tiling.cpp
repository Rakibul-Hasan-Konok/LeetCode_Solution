class Solution {
public:
    int numTilings(int n) {
        const int mod = 1e9 + 7;
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (n == 3) return 5;

        long a = 1, b = 2, c = 5;
        for (int i = 4; i <= n; ++i) {
            long d = (2 * c % mod + a) % mod;
            a = b;
            b = c;
            c = d;
        }
        return c;
    }
};
