#include <vector>

bool isMonotonic(std::vector<int> array)
{
    bool nonIncreasing = true;
    bool nonDecreasing = true;

    for (int i = 1; i < array.size(); i++)
    {
        if (nonDecreasing && array[i] < array[i - 1])
        {
            nonDecreasing = false;
        }

        if (nonIncreasing && array[i] > array[i - 1])
        {
            nonIncreasing = false;
        }
    }

    return nonIncreasing || nonDecreasing;
}
