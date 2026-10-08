class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int prev1 = 0;
        int prev2 = 0;
        int result1 = 0;
        int result2 = 0;
        int a = 0;
        int b = 0;
        if (n == 1)
            return nums[0];
        for (int i = 1; i < n; i++)
        {
            result1 = max(prev1 + nums[i], prev2);
            prev1 = prev2;
            prev2 = result1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            result2 = max(a + nums[i], b);
            a = b;
            b = result2;
        }
        return max(result1, result2);
    }
};