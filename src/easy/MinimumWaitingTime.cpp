#include <algorithm>
#include <numeric>
#include <vector>

int minimumWaitingTime(std::vector<int> queries)
{
    std::sort(queries.begin(), queries.end());

    std::vector<int> waitingTimes(queries.size(), 0);

    for (int i = 1; i < queries.size(); i++)
    {
        waitingTimes[i] = queries[i - 1] + waitingTimes[i - 1];
    }

    return std::accumulate(waitingTimes.begin(), waitingTimes.end(), 0);
}
