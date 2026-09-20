class Solution {
public:
    long long reverse(long long x) {
        long long org = x;
        if (x < 0) {
            x = -x;
        }

        long long rev = 0;

        while (x > 0) {
            long long rem = x % 10;
            rev = rev * 10 + rem;
            x /= 10;
        }

        if (org < 0) {
            rev = -rev;
        }

        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        return rev;
    }
};