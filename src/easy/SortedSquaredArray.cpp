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

std::vector<int> sortedSquaredArray2(std::vector<int> array)
{
    std::vector<int> result(array.size(), 0);

    int lowerIndex = 0;
    int upperIndex = static_cast<int>(array.size()) - 1;
    int resultUpperIndex = static_cast<int>(result.size()) - 1;

    while (lowerIndex <= upperIndex)
    {
        const auto lowerValue = array[lowerIndex];
        const auto upperValue = array[upperIndex];

        const auto lowerValueSquared = lowerValue * lowerValue;
        const auto upperValueSquared = upperValue * upperValue;

        if (lowerValueSquared >= upperValueSquared)
        {
            result[resultUpperIndex] = lowerValueSquared;

            lowerIndex++;
        }
        else
        {
            result[resultUpperIndex] = upperValueSquared;

            upperIndex--;
        }

        resultUpperIndex--;
    }

    return result;
}
