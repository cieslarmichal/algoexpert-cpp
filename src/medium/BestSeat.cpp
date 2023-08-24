#include <vector>

int bestSeat(std::vector<int> seats)
{
    int startOfEmptySeatsIndex = -1;

    std::vector<int> longestEmptySeatsRange{-1, -1};

    for (int i = 1; i < seats.size(); i++)
    {
        if (seats[i] == 0)
        {
            if (startOfEmptySeatsIndex == -1)
            {
                startOfEmptySeatsIndex = i;
            }
        }
        else
        {
            const auto previousIndex = i - 1;

            if (startOfEmptySeatsIndex == -1)
            {
                continue;
            }

            if (longestEmptySeatsRange[0] == -1 ||
                previousIndex - startOfEmptySeatsIndex > longestEmptySeatsRange[1] - longestEmptySeatsRange[0])
            {
                longestEmptySeatsRange = std::vector<int>{startOfEmptySeatsIndex, previousIndex};
            }

            startOfEmptySeatsIndex = -1;
        }
    }

    if (longestEmptySeatsRange[0] != -1)
    {
        return (longestEmptySeatsRange[0] + longestEmptySeatsRange[1]) / 2;
    }

    return -1;
}
