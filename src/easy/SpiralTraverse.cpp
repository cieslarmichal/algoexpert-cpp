#include <vector>

std::vector<int> spiralTraverse(std::vector<std::vector<int>> array)
{
    int startRowIndex = 0;
    int endRowIndex = array.size() - 1;
    int startColumnIndex = 0;
    int endColumnIndex = array[0].size() - 1;

    std::vector<int> traversedElements;

    while (startRowIndex <= endRowIndex && startColumnIndex <= endColumnIndex)
    {

        for (int i = startColumnIndex; i <= endColumnIndex; i++)
        {
            traversedElements.push_back(array[startRowIndex][i]);
        }

        for (int i = startRowIndex + 1; i <= endRowIndex; i++)
        {
            traversedElements.push_back(array[i][endColumnIndex]);
        }

        if (startColumnIndex == endColumnIndex || startRowIndex == endRowIndex)
        {
            break;
        }

        for (int i = endColumnIndex - 1; i > startColumnIndex; i--)
        {
            traversedElements.push_back(array[endRowIndex][i]);
        }

        for (int i = endRowIndex; i > startRowIndex; i--)
        {
            traversedElements.push_back(array[i][startColumnIndex]);
        }

        startRowIndex++;
        startColumnIndex++;
        endRowIndex--;
        endColumnIndex--;
    }

    return traversedElements;
}
