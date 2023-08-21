#include <vector>

std::vector<int> moveElementToEnd(std::vector<int> array, int toMove)
{
    int currentIndex = 0;
    int indexToMoveNumber = array.size() - 1;

    while (currentIndex < indexToMoveNumber)
    {
        if (array[indexToMoveNumber] == toMove)
        {
            indexToMoveNumber--;

            continue;
        }

        if (array[currentIndex] == toMove)
        {
            std::swap(array[currentIndex], array[indexToMoveNumber]);
        }

        currentIndex++;
    }

    return array;
}
