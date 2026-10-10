class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long x = 0;
        if (num == 1)
        {
            return true;
        }
        while (x < num)
        {
            if (x * x == num)
            {
                return true;
            }
            x++;
        }
        return false;
    }
};