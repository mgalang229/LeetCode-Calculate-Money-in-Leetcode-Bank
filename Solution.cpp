class Solution {
public:
    int totalMoney(int n) {
        int start = 0, cur = 0, total = 0;
        for (int i = 0; i < n; i++) {
            if (i % 7 == 0) {
                start++;
                cur = start;
            }
            total += cur;
            cur++;
        }
        return total;
    }
};
