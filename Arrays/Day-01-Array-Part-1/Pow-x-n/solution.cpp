class Solution {
public:
    double myPow(double x, int n) {
        return power(x, (long long)n);
    }

    double power(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }

        if (n < 0) {
            return 1.0 / power(x, -n);
        }

        double half = power(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }

        return x * half * half;
    }
};
