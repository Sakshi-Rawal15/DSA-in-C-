class Solution {
    public:

        int findSum(int n) {
                int sum = 0;

                        while (n > 0) {
                                    int d = n % 10;
                                                n = n / 10;

                                                            sum = sum + d * d;
                                                                    }

                                                                            return sum;
                                                                                }

                                                                                    bool isHappy(int n) {

                                                                                            int slow = n;
                                                                                                    int fast = n;

                                                                                                            do {
                                                                                                                        slow = findSum(slow);                 // 1 step
                                                                                                                                    fast = findSum(findSum(fast));        // 2 steps

                                                                                                                                            } while (slow != fast);

                                                                                                                                                    return slow == 1;
                                                                                                                                                        }
                                                                                                                                                        };
