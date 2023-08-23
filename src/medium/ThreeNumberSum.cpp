#include <algorithm>
#include <vector>

std::vector<std::vector<int>> threeNumberSum(std::vector<int> array, int targetSum)
{
    if (array.size() < 3)
    {
        return {};
    }

    std::sort(array.begin(), array.end());

    std::vector<std::vector<int>> result;

    for (int i = 0; i < array.size() - 2; i++)
    {
        int leftIndex = i + 1;
        int rightIndex = array.size() - 1;

        while (leftIndex < rightIndex)
        {
            const auto sum = array[i] + array[leftIndex] + array[rightIndex];

            if (sum == targetSum)
            {
                result.push_back({array[i], array[leftIndex], array[rightIndex]});

                leftIndex++;
            }
            else if (sum > targetSum)
            {
                rightIndex--;
            }
            else if (sum < targetSum)
            {
                leftIndex++;
            }
        }
    }

    return result;
}
