#include <cmath>
#include <vector>

std::vector<int> smallestDifference(std::vector<int> arrayOne, std::vector<int> arrayTwo)
{
    std::vector<int> smallestDifferencePair;
    int smallestDistance = 10000;

    for (int i = 0; i < arrayOne.size(); i++)
    {
        for (int j = 0; j < arrayTwo.size(); j++)
        {
            const auto distance = std::abs(arrayTwo[j] - arrayOne[i]);

            if (distance < smallestDistance)
            {
                smallestDifferencePair = {arrayOne[i], arrayTwo[j]};

                smallestDistance = distance;
            }
        }
    }

    return smallestDifferencePair;
}
