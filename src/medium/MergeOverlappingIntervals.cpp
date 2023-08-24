#include <algorithm>
#include <cmath>
#include <vector>

std::vector<std::vector<int>> mergeOverlappingIntervals(std::vector<std::vector<int>> intervals)
{
    std::sort(intervals.begin(), intervals.end(),
              [](const std::vector<int>& pair1, const std::vector<int>& pair2) { return pair1[0] < pair2[0]; });

    std::vector<std::vector<int>> result;

    std::vector<int> previousInterval = intervals[0];

    for (int i = 1; i < intervals.size(); i++)
    {
        const auto currentInterval = intervals[i];

        if (currentInterval[0] >= previousInterval[0] && currentInterval[0] <= previousInterval[1])
        {
            const auto mergedIntervalStart = previousInterval[0];
            const auto mergedIntervalEnd = std::max(currentInterval[1], previousInterval[1]);

            previousInterval = std::vector<int>{mergedIntervalStart, mergedIntervalEnd};
        }
        else
        {
            result.push_back(previousInterval);

            previousInterval = currentInterval;
        }
    }

    result.push_back(previousInterval);

    return result;
}
