#include <unordered_set>
#include <vector>

std::vector<int> twoNumberSum(const std::vector<int>& array, int targetSum)
{
    std::unordered_set<int> visitedNumbers;

    for (const auto& currentNumber: array)
    {
        const auto potentialMatch = targetSum - currentNumber;

        if (visitedNumbers.find(potentialMatch) != visitedNumbers.end())
        {
            return {currentNumber, potentialMatch};
        }

        visitedNumbers.insert(currentNumber);
    }

    return {};
}
