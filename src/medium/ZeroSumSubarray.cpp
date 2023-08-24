#include <vector>

bool zeroSumSubarray(std::vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int currentSum = 0;

        for (int j = i; j < nums.size(); j++)
        {
            currentSum += nums[j];

            if (currentSum == 0)
            {
                return true;
            }
        }
    }

    return false;
}
