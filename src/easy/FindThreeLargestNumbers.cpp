#include <vector>

std::vector<int> findThreeLargestNumbers(std::vector<int> array)
{
    std::vector<int> largestNumbers(3, -100000);

    for (const auto& number : array)
    {
        if (number > largestNumbers[2])
        {
            largestNumbers[0] = largestNumbers[1];
            largestNumbers[1] = largestNumbers[2];
            largestNumbers[2] = number;
        }
        else if (number > largestNumbers[1])
        {
            largestNumbers[0] = largestNumbers[1];
            largestNumbers[1] = number;
        }
        else if (number > largestNumbers[0])
        {
            largestNumbers[0] = number;
        }
    }

    return largestNumbers;
}
