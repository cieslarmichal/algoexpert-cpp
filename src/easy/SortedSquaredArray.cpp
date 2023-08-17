#include <algorithm>
#include <vector>

std::vector<int> sortedSquaredArray(const std::vector<int>& array)
{
    std::vector<int> result;

    result.reserve(array.size());

    for (const auto& number : array)
    {
        result.push_back(number * number);
    }

    std::sort(result.begin(), result.end());

    return result;
}
