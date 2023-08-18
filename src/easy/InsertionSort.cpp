#include <algorithm>
#include <vector>

std::vector<int> insertionSort(std::vector<int> array)
{
    for (int i = 1; i < array.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j] < array[j - 1])
            {
                std::swap(array[j], array[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    return array;
}
