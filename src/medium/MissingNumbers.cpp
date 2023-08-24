#include <algorithm>
#include <vector>

std::vector<int> missingNumbers(std::vector<int> nums)
{
    std::sort(nums.begin(), nums.end());

    std::vector<int> missingNumbers;

    int previousNumber = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > previousNumber + 2)
        {
            missingNumbers.push_back(nums[i] - 2);
            missingNumbers.push_back(nums[i] - 1);
        }
        else if (nums[i] > previousNumber + 1)
        {
            missingNumbers.push_back(nums[i] - 1);
        }

        previousNumber = nums[i];
    }

    if (missingNumbers.empty())
    {
        missingNumbers.push_back(nums.size() + 1);
        missingNumbers.push_back(nums.size() + 2);
    }

    if (missingNumbers.size() == 1)
    {
        missingNumbers.push_back(nums.size() + 2);
    }

    return missingNumbers;
}
