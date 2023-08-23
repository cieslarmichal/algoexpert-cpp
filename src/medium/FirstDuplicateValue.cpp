#include <unordered_set>
#include <vector>

int firstDuplicateValue(std::vector<int> array)
{
    std::unordered_set<int> visitedNumbers;

    for (const auto& number : array)
    {
        if (visitedNumbers.find(number) != visitedNumbers.end())
        {
            return number;
        }
        else
        {
            visitedNumbers.insert(number);
        }
    }

    return -1;
}
