#include <vector>

int longestPeak(std::vector<int> array)
{
    int longestPeakSize = 0;

    if (array.size() < 3)
    {
        return 0;
    }

    for (int i = 1; i < array.size() - 1; i++)
    {
        if (array[i] > array[i - 1] && array[i] > array[i + 1])
        {
            int currentPeakSize = 1;

            int currentIndex = i - 1;
            while (currentIndex >= 0 && array[currentIndex] < array[currentIndex + 1])
            {
                currentPeakSize++;
                currentIndex--;
            }

            currentIndex = i + 1;
            while (currentIndex <= array.size() - 1 && array[currentIndex] < array[currentIndex - 1])
            {
                currentPeakSize++;
                currentIndex++;
            }

            if (currentPeakSize > longestPeakSize)
            {
                longestPeakSize = currentPeakSize;
            }
        }
    }

    return longestPeakSize;
}
