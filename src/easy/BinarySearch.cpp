#include <vector>

int binarySearchHelper(std::vector<int> array, int target, int startIndex, int endIndex)
{
    const auto middleIndex = (startIndex + endIndex) / 2;

    if (target == array[middleIndex])
    {
        return middleIndex;
    }

    if (startIndex == endIndex)
    {
        return -1;
    }

    if (target < array[middleIndex])
    {
        return binarySearchHelper(array, target, startIndex, middleIndex);
    }
    else
    {
        return binarySearchHelper(array, target, middleIndex + 1, endIndex);
    }
}

int binarySearch(std::vector<int> array, int target)
{
    return binarySearchHelper(array, target, 0, array.size());
}
