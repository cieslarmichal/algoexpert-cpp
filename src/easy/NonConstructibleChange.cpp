#include <algorithm>
#include <vector>

int nonConstructibleChange(std::vector<int> coins)
{
    std::sort(coins.begin(), coins.end());

    int currentChange = 0;

    for (const auto& coin : coins)
    {
        if (coin > currentChange + 1)
        {
            return currentChange + 1;
        }

        currentChange += coin;
    }

    return currentChange + 1;
}
