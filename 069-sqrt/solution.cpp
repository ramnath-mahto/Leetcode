class Solution
{
public:
    int mySqrt(int x)
    {
        long long a = 0;
        while (1)
        {
            if (a * a > x)
            {
                return a - 1;
            }
            a += 1;
        }
        return a;
    }
};