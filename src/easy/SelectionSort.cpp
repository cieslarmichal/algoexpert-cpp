#include <algorithm>
#include <vector>

std::vector<int> selectionSort(std::vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        int smallestValueIndex = i;

        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[j] < array[smallestValueIndex])
            {
                smallestValueIndex = j;
            }
        }

        std::swap(array[i], array[smallestValueIndex]);
    }

    return array;
}
