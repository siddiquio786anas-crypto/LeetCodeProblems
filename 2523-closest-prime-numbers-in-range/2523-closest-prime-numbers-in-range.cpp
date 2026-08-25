class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        // Step 1: Sieve
        vector<bool> isPrime(right + 1, true);

        isPrime[0] = false;
        if (right >= 1)
            isPrime[1] = false;

        for (int i = 2; i * i <= right; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 2: Find closest adjacent primes
        int prev = -1;
        int a = -1, b = -1;
        int mini = INT_MAX;

        for (int i = left; i <= right; i++) {

            if (isPrime[i]) {

                if (prev != -1) {
                    int diff = i - prev;

                    if (diff < mini) {
                        mini = diff;
                        a = prev;
                        b = i;
                    }

                    // Minimum possible gap between primes
                    if (diff == 1) {
                        return {prev, i};
                    }
                }

                prev = i;
            }
        }

        // Less than 2 primes
        return {a, b};
    }
};