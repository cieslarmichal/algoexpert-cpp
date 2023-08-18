#include <vector>

std::vector<int> bubbleSort(std::vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.size() - 1; j++)
        {
            if (array[j + 1] < array[j])
            {
                int temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;
            }
        }
    }

    return array;
}
