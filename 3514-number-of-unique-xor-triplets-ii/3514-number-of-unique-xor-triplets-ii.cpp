class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        const int MAXX = 2048;
        int n = nums.size();

        vector<bool> pairXor(MAXX, false);

        // Compute all possible XORs of two elements
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                pairXor[nums[i] ^ nums[j]] = true;
            }
        }

        vector<bool> ans(MAXX, false);

        // Combine with every first element
        for (int i = 0; i < n; i++) {
            for (int x = 0; x < MAXX; x++) {
                if (pairXor[x]) {
                    ans[nums[i] ^ x] = true;
                }
            }
        }

        int cnt = 0;
        for (bool x : ans)
            cnt += x;

        return cnt;
    }
};